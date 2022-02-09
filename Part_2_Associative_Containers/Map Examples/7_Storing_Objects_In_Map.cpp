#include<iostream>
#include<map>
#include "employee.h"
int main()
{
    std::map<int, Employee> employees;
    employees.insert(std::make_pair(1001, Employee(1001, "Scott", 5000,10)));
    employees.insert(std::make_pair(1005, Employee(1005, "Meyers", 6000,15)));
    employees.insert(std::make_pair(1002, Employee(1002, "Richard", 8000,12)));
    employees.emplace(1003, Employee(1003,"Stevens", 7000,14));
    employees.emplace(1004, Employee(1004,"Lippman", 9000,11));
    std::map<int, Employee>::iterator iter;
    for(iter=employees.begin();iter!=employees.end();++iter)
        (iter->second).display();
    Employee& ref=employees[1003]; //employees.at(1003);
    ref.display();
    employees[1005].display();
    employees.at(1005).display();
    iter=employees.find(1002);
    if(iter!=employees.end())
        std::cout << "Employee with given key found\n";
    return 0;
}