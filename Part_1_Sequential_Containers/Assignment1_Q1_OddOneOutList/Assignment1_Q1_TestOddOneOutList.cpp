#include "gtest/gtest.h"
#include "Assignment1_Q1_OddOneOutList.h"

typedef enum error_t
{
    SUCESS,
    FAILURE
}

TEST(List_test, FindOddOneOut)
{
    std::list<std::string> Collection;

    Collection.push_back("CTEA");
    Collection.push_back("CTEA");
    Collection.push_back("CTEA");
    Collection.push_back("CTEA");
    Collection.push_back("CTEA");

    std::string result;
    EXPECT_EQ(FAILURE, FindOddOneOut(Collection, result));

    Collection.push_back("Mysore");
    EXPECT_EQ(SUCESS, FindOddOneOut(Collection, result));
    std::string expected = "Mysore";
    EXPECT_STREQ(expected, result);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argc);
    return RUN_ALL_TESTS();
}