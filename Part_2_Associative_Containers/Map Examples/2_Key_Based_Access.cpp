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

    std::string cname;
    cname = cities.at(105);
    cname = cities[108];
    cname = cities[115];
    //cname = cities.at(112);     //Exception/Error

    cities[103]="Pune";           //Search and Insert
    cities[104]="New Delhi";      //Replace

    std::map<int, std::string>::iterator iter;
    for(iter=cities.begin();iter!=cities.end();++iter)
        std::cout << iter->first << "," << iter->second << "\n";
    return 0;
}