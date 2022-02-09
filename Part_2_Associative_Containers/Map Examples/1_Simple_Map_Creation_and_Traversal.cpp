#include<iostream>
#include<map>
int main()
{
    std::map<int, std::string> cities;
    //cities.insert(std::pair<int,std::string>(101,"Delhi"));
    cities.insert(std::make_pair(101,"Delhi"));
    cities.insert(std::make_pair(105,"Mumbai"));
    cities.insert(std::make_pair(102,"Chennai"));
    cities.insert(std::make_pair(104,"Kolkata"));
    cities.insert(std::make_pair(108,"Mysore"));
    cities.insert(std::make_pair(110,"Bengaluru"));
    cities.insert(std::make_pair(106,"Baroda"));
    cities.insert(std::make_pair(107,"Hyderabad"));

    std::map<int, std::string>::iterator iter;
    for(iter=cities.begin();iter!=cities.end();++iter)
        std::cout << iter->first << "," << iter->second << "\n";

    /* for(std::pair<int,std::string>  p:cities)
        std::cout << p.first << "," << p.second << "\n"; */
    
    return 0;
}