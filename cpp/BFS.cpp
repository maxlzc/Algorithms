//
// Created by max on 2017/11/4.
//

#include "BFS.h"


bool BFS()
{

    /*
     * 1-->2-->5
     * 2-->1-->5-->3-->4
     * 3-->2-->4
     * 4-->2-->5-->3
     * 5-->4-->1-->2
     */
    array<array<int,5>,5> A={
            0,1,0,0,1,
            1,0,1,1,1,
            0,1,0,1,0,
            0,1,1,0,1,
            1,1,0,1,0
    };
    vector<point> G(5);

    for(int i =0;i<A[0].size();i++)
    {
        G[i].color = -1;/*w,g,b*/
        G[i].d = 1000;

        G[i].x=i;
    }

    G[0].d = 0;
    G[0].color = 0;
    deque<point> Q;
    Q.push_back(G[0]);
    while(Q.size())
    {
        auto u = Q[0];
        Q.pop_front();
        for(int i=0;i<A[0].size();i++)
        {
            if(A[u.x][i] == 1 && G[i].color == -1)
            {
                Q.push_back(G[i]);
                G[i].color=0;
                G[u.x].p.push_back(G[i]);
            }
        }
    }
    return true;
}
