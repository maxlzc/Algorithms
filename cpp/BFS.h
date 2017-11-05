//
// Created by max on 2017/11/5.
//

#ifndef CPP_BFS_H
#define CPP_BFS_H
#include <deque>
#include <array>
#include <iostream>
#include <vector>
using namespace std;
bool BFS();
class point{
public:
    int color;
    int d;
    int x;
    vector<point> p;
};
#endif //CPP_BFS_H
