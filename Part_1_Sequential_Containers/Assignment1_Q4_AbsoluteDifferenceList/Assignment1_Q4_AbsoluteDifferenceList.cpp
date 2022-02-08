/**
 * @file Assignment1_Q4_AbsoluteDifferenceList
 * @author Akshunna Prakash (fastmixes291@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// header files
#include <numeric>
#include <list>
#include "Assignment1_Q4_AbsoluteDifferenceList.h"
using namespace std;

int main()
{
    //lists
    std::list<double> v1{0, 0.1, 0.25, 0.45, 0.55, 0.7, 0.9, 1.0};
    //printing elements
    cout << "List Elements:" << endl;
    for (double x : v1)
        cout << x << " ";
    cout << endl;
    //finding sum with initial value of sum is 0
    double sum = std::accumulate(v1.begin(), v1.end(), 0.0); 
    cout << "Sum (With Intial Value of Sum is 0): " << sum << endl;
    //finding sum with initial value of sum is 100
    // sum = accumulate(v1.begin(), v1.end(), 100);
    // cout << "sum (with intial value of sum is 100): " << sum << endl;
    double avg;
    avg=sum/8;
    cout<<avg<<endl;
    return 0;
}