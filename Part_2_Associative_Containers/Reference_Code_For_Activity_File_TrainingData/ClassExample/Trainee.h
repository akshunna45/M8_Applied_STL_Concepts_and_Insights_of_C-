#ifndef __TRAINING_H
#define __TRAINING_H
#include<string>

class Trainee 
{
    int m_id;
    std::string m_name;
    double m_score;
public:
    Trainee(int id, std::string name, double score);
    int get_id() const { return m_id; }
    std::string getName() const { return m_name; }
    double getScore() const { return m_score; }
    void display() const;
    friend std::ostream& operator<<(std::ostream&, const Trainee&);
};

#endif
