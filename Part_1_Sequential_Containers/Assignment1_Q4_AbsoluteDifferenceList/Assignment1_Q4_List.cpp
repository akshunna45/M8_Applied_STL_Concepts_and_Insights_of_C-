/**
 * @file Assignment1_Q4_List.cpp
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
#include<list>
using namespace std;

int main()
{
    
    std::list<float> v1{12,13,14,15,16,17,18,19,20};
    int count=1;
    int total=0;
    int zotal=0;
    cout << "List elements are: "<<endl;
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
    cout<<"List elements less than mean value: "<<endl;
    for (float y : v1)
    {   if(y <= mean)
        {
            cout << y << " ";
            total++;
        }      
    }
    cout<<"\n";
    cout<<"Number of list elements that are lesser: "<<total<<endl;
    cout<<"List elements more than mean value: "<<endl;
    for (float z : v1)
    {   
        if(z > mean)
        {
            cout << z << " ";
            zotal++;
        }
    }
    cout<<"\n";
    cout<<"Number of list elements that are greater: "<<zotal<<endl;
    cout<<"The difference between both the counts is: "<<zotal-total;
}