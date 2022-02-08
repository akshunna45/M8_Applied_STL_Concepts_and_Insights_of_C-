#ifndef ASSIGNMENT1_Q1_ODDONEOUTVECTOR_H_
#include <vector>
#include <string>
typedef enum error_t
{
    SUCESS,
    FAILURE
}
error_t FindOddManOut(std::vector<std::string>&input ,std::string& result);
