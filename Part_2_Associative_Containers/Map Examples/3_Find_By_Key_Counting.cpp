#include<iostream>
#include<map>
int main()
{
    std::map<int, std::string> cities;
    //cities.insert(std::pair<int,std::string>(101,"Delhi"));
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
        std::cout << "Key Found, Value is :" << iter->second << "\n";
    iter=cities.find(115);
    if(iter==cities.end())
        std::cout << "Key Not Found :" << "\n";

    int k1, k2;
    k1=cities.count(108);
    k2=cities.count(115);
    std::cout << k1 << "," << k2 << "\n";


    return 0;
}