#include<iostream>
#include<map>
/* Note:- equal_range, upper_bound, lower_bound
 * are more meaningful for std::multimap, as
 * no duplicates allowed for std::map these
 * are less significant
 */
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
    typedef std::map<int,std::string>::iterator mapiter;
    std::pair<mapiter,mapiter> foundrange;
    foundrange = cities.equal_range(105);
    //auto foundrange = cities.equal_range(105);
    std::map<int, std::string>::iterator iter;
    for(iter=foundrange.first; iter!=foundrange.second;++iter)
        std::cout << iter->first << "," << iter->second << "\n";
    iter=cities.lower_bound(105);
    std::cout << iter->first << "," << iter->second << "\n";
    iter=cities.upper_bound(105);
    std::cout << iter->first << "," << iter->second << "\n";
    iter=cities.lower_bound(101);
    std::cout << iter->first << "," << iter->second << "\n";
    iter=cities.upper_bound(110);
    if(iter!=cities.end())
        std::cout << iter->first << "," << iter->second << "\n";
    else
        std::cout << "No upper bound\n";
    return 0;
}