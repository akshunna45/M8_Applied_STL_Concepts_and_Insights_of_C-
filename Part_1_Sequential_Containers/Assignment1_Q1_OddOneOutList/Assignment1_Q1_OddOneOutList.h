#ifndef ASSIGNMENT1_Q1_ODDONEOUTLIST_H_
#include <list>
#include <string>
typedef enum error_t
{
    SUCESS,
    FAILURE
}
error_t FindOddManOut(std::list<std::string>&input ,std::string& result);
