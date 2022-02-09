#include<iostream>
#include<map>
int main()
{
    std::map<int, std::string> cities;
    cities.insert(std::make_pair(101,"Kolkata"));
    cities.insert(std::make_pair(105,"Mumbai"));
    cities.insert(std::make_pair(102,"Chennai"));
    cities.insert(std::make_pair(104,"Delhi"));
    cities.insert(std::make_pair(108,"Mysore"));
    cities.insert(std::make_pair(110,"Bengaluru"));
    cities.insert(std::make_pair(106,"Baroda"));
    cities.insert(std::make_pair(107,"Hyderabad"));
    std::map<int, std::string>::iterator iter;
    iter=cities.find(108);
    if(iter!=cities.end())
        cities.erase(iter);
    iter=cities.find(115);
    if(iter!=cities.end())
        cities.erase(iter);   //without key check, erase is dangerous
    return 0;
}