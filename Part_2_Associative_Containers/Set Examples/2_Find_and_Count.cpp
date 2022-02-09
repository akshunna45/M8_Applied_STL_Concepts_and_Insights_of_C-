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
        std::cout << "Key found\n";
    iter=myset.find(112);
    if(iter==myset.end())
        std::cout << "Key not found\n";
    int k1=myset.count(106);
    int k2=myset.count(112);
    std::cout << k1 << "," << k2 << "\n";
    return 0;
}