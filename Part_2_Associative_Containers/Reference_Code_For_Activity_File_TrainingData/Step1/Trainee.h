#ifndef __TRAINEE_H
#define __TRAINEE_H
#include<string>
#include<iostream>


class Trainee
{
    int m_id;
    std::string m_name;
    double m_score;  //total score
public:
    Trainee(int id, std::string name, double score);
    int getId() const { return m_id; }
    std::string getName() const { return m_name; }
    double getScore() const { return m_score; }
    void display() const;
   // friend std::ostream& operator<<(std::ostream&, const Trainee&);
};

#endif
