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
    for(iter=myset.begin();iter!=myset.end();++iter)
        std::cout << *iter << "\n";
    
    std::cout << "Size:" << myset.size() << "\n";
    if(myset.empty())
        std::cout << "set is not empty\n";    
    
    return 0;
}