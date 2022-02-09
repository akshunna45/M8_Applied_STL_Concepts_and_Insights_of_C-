#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
class Employee {
    int m_id;
    std::string m_name;
    double m_salary;
    int m_exp;
public:
    Employee() { }
    Employee(int id, std::string name, double salary, int exp):
        m_id(id), m_name(name), m_salary(salary), m_exp(exp) { }
    void display() const {
        std::cout << m_id << "," << m_name << "," << m_salary << "," << m_exp << "\n";
    }
};
#endif // POINT_H