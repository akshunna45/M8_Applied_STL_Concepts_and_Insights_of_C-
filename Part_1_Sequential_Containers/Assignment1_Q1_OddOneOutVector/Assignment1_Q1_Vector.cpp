/**
 * @file Assignment1_Q1_Vector.cpp
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
#include<vector>
using namespace std;
void printDuplicates(vector<string> words)
{
    // vector<string> duplicate
    vector<string> duplicate;
    // vector sort
    sort(words.begin(), words.end());
    
    for (int i = 1; i < words.size(); i++) 
    {
        if (words[i - 1] != words[i]) 
        {
            if (duplicate.empty())
                duplicate.push_back(words[i]);
            else if (words[i] != duplicate.back())
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
    vector<string> words{ "Hello", "World", "Hello"};
    printDuplicates(words);
    return 0;
}