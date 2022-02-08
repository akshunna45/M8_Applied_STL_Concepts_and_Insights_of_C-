/**
 * @file Assignment1_Q1_OddOneOutList.cpp
 * @author Akshunna Prakash (fastmixes291@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// header files
#include<iostream>
#include<bits/stdc++.h>
#include<list>
#include"Assignment1_Q1_OddOneOutList.h"
using namespace std;
void Duplicates(list<string> words)
{
    list<string> duplicate;
    // list sorting
    string=words.sort(); 
    // list iternation
    // logic part
    for (int i = 1; i < string.size(); i++) 
    {
        if (string[i - 1] != string[i]) 
        {
            if (string.empty())
                duplicate.push_back(string[i]);
            else if (string[i] != duplicate.back())
                duplicate.push_back(words[i]);
        }
    }
    if (duplicate.size() == 0)
        cout << "No Duplicate words" << endl;
    else
        for (int i = 0; i < duplicate.size(); i++)
            cout << duplicate[i] << endl;
}
int main()
{
    list<string> words{ "aa", "ab", "aa"}; //list creating type string
    Duplicates(words); //function call
    return 0;
}