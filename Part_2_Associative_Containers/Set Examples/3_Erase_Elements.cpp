#include<iostream>
#include<set>
int main()
{
    std::set<int> myset;
    myset.insert(101);
    myset.insert(105);
    myset.insert(108);
    myset.insert(102);
    myset.insert(103);
    myset.insert(106);
    myset.insert(104);

    std::set<int>::iterator iter;

    iter=myset.find(106);
    if(iter!=myset.end())
        myset.erase(iter);

    iter=myset.find(112);
    if(iter!=myset.end())
        myset.erase(iter);  //safe deletion

    return 0;
}