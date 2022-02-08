/**
 * @file Assignment1_Q1_OddOneOutVector.cpp
 * @author Akshunna Prakash (fastmixes291@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// header files
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include "Assignment1_Q1_OddOneOutVector.h"
using namespace std;
void Duplicates(vector<string> words)
{
    vector<string> duplicate;
    // vector sorting
    string=words.sort(); 
    // vector iternation
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
    vector<string> words{ "aa", "ab", "aa"}; //vector creating type string
    Duplicates(words); //function call
    return 0;
}