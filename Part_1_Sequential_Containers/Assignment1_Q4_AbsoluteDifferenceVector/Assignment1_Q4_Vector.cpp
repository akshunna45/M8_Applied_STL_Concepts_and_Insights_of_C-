/**
 * @file Assignment1_Q4_Vector.cpp
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
#include<numeric>
#include<vector>
using namespace std;

int main()
{
    
    vector<float> v1{12,13,14,15,16,17,18,19,20};
    int count=1;
    int total=0;
    int zotal=0;
    cout << "Vector elements are: "<<endl;
    for (float x : v1)
      {  
        cout<<x<<" ";
        count++;
      }
    cout<<endl;
    float sum = std::accumulate(v1.begin(), v1.end(), 0.0);
    float mean;
    mean = sum/count;
    cout<<"Mean: "<<mean<<endl;
    cout<<"Vector elements less than mean value: "<<endl;
    for (float y : v1)
    {   if(y <= mean)
        {
            cout << y << " ";
            total++;
        }      
    }
    cout<<"\n";
    cout<<"Number of vector elements that are lesser: "<<total<<endl;
    cout<<"Vector elements more than mean value: "<<endl;
    for (float z : v1)
    {   
        if(z > mean)
        {
            cout << z << " ";
            zotal++;
        }
    }
    cout<<"\n";
    cout<<"Number of vector elements that are greater: "<<zotal<<endl;
    cout<<"The difference between both the counts is: "<<zotal-total;
}