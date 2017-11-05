//
// Created by max on 2017/11/5.
//

#ifndef CPP_SAME_PREFIX_STRING_H
#define CPP_SAME_PREFIX_STRING_H

#include "head.h"
void printSamePreString(vector<string> sv)
{
    int i=0;
    if(sv.size()<0)
    {
        cout<<"The string is 0"<<endl;
        return;
    }
    for(auto a:sv[0])
    {
        for(auto s:sv)
        {
            if(s.size()<i ||a != s[i])
            {
                cout<<"The max length:"<<i<<endl;
                return;
            }
        }
        i++;
    }
}
#endif //CPP_SAME_PREFIX_STRING_H
