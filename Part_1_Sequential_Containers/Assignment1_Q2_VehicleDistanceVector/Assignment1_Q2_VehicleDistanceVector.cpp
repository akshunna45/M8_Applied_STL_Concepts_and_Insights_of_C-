/**
 * @file Assignment1_Q2_VehicleDistanceVector.cpp
 * @author Akshunna Prakash (fastmixes291@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// header files

//#include"iostream"
#include "Assignment1_Q2_VehicleDistanceVector.h"
using namespace std;


//fun def distance(vector<double>)
double calculate_average(vector<double>& v1)
{
  //finding sum with initial value of sum is 0.0
    double sum = accumulate(v1.begin(), v1.end(), 0.0); 
    cout << "sum = " << sum << endl;


    double avg;
    avg=sum/v1.size();
   // cout<<"Average = "<<avg<<endl;
    return avg;
    
}

/*int main()
{
    //vector
    vector<double> v1{ 0,0.1,0.25,0.45,0.55,0.7,0.9,1.0 };

    //printing elements
    cout << "vector elements" << endl;
    for (double x : v1)
        cout << x << " ";
    cout << endl;

   //function call and output 
   cout<<calculate_averag(v1)<<endl;

   

    return 0;
}*/