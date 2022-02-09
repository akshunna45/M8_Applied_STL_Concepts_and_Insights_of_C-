#include "Trainee.h"

//Trainee::Trainee(){}

Trainee::Trainee(int id, std::string name, double score)
    : m_id(id), m_name(name), m_score(score)
    { }

//Trainee::Trainee(const Trainee &T1)
    
//{
   /// this->m_id = T1.m_id;
   /// this->m_name = T1.m_name;
   /// this->m_score =T1.m_score;

//}
void  Trainee::display() const
{
    std::cout << m_id << "," << m_name << "," << m_score << "\n";
}

/*std::ostream& operator<<(std::ostream& rout, const Trainee& ref)
{
    rout << ref.m_id << "," << ref.m_name << "," << ref.m_score << "\n";
}*/

int main()
{   
   // Trainee T=new Trainee();
    Trainee T1(400,"Sachin",80);
    Trainee T2= T1;
    


    T1.display();
    T2.display();
    


    return 0;
}