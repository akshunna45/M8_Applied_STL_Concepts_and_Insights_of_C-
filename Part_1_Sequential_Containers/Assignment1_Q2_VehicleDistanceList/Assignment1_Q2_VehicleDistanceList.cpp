/**
 * @file Assignment1_Q2_VehicleDistanceList.cpp
 * @author Akshunna Prakash (fastmixes291@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// header files

#include "Assignment1_Q2_VehicleDistanceList.h"
double calculate_average(std::list<double>& values)
{
    int number_of_elements = values.size();
    if(0 == number_of_elements)
    {
        return 0.0;
    }
    double sum = std::accumulate(values.begin(),values.end(),0.0);
    return sum / number_of_elements;
}