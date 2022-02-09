#include<iostream>
#include<map>
int main()
{
    std::multimap<int, std::string> cities;
    cities.insert(std::make_pair(101,"Kolkata"));
    cities.insert(std::make_pair(105,"Mumbai"));
    cities.insert(std::make_pair(102,"Chennai"));
    cities.insert(std::make_pair(105,"Delhi"));
    cities.insert(std::make_pair(108,"Mysore"));
    cities.insert(std::make_pair(105,"Bengaluru"));
    cities.insert(std::make_pair(106,"Baroda"));
    cities.insert(std::make_pair(108,"Hyderabad"));

    std::cout << "Count of 105:" << cities.count(105) << "\n";
    std::cout << "Count of 108:" << cities.count(108) << "\n";
    std::cout << "Count of 112:" << cities.count(112) << "\n";

    /*typedef std::multimap<int,std::string>::iterator mapiter;
    std::pair<mapiter,mapiter> foundrange;
    foundrange = cities.equal_range(105);*/
    auto foundrange = cities.equal_range(105);
    std::multimap<int, std::string>::iterator iter;
    for(iter=foundrange.first; iter!=foundrange.second;++iter)
        std::cout << iter->first << "," << iter->second << "\n";

    iter=cities.lower_bound(105);
    std::cout << "--------------------------------------\n";
    std::cout << iter->first << "," << iter->second << "\n";

    iter=cities.upper_bound(105);
    std::cout << "--------------------------------------\n";
    std::cout << iter->first << "," << iter->second << "\n";

    return 0;
}