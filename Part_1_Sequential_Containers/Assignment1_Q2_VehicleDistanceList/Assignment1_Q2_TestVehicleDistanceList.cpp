#include "gtest/gtest.h"
#include "Assignment1_Q2_VehicleDistanceList.h"

typedef enum error_t
{
    SUCESS,
    FAILURE
}
TEST(List_test, Calculate_Average)
{
    std::list<double> mylist ={0, 0.1, 0.25, 0.45, 0.55, 0.7, 0.9, 1.0};
    EXPECT_DOUBLE_EQ(0.49375, Calculate_Average(list));

    std::list<double> mylist1;
    EXPECT_DOUBLE_EQ(0.0, Calculate_Average(mylist));
}

int main(int argc, char **argc)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TEST();
}