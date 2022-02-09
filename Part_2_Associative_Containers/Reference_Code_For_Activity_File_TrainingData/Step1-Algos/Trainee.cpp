#include "Trainee.h"

Trainee::Trainee(int id, std::string name, double score): m_id(id), m_name(name), m_score(score) { }

void Trainee::display() const
{
    std::cout << m_id << "," << m_name << "," << m_score << "\n";
}

std::ostream& operator<<(std::ostream& rout, const Trainee& ref)
{
    rout << ref.m_id << "," << ref.m_name << "," << ref.m_score << "\n";
}
