#include "gtest/gtest.h"
#include "Assignment1_Q2_VehicleDistanceVector.h"
TEST(Vector_test, Calculate_average_correct_value)
{
    std::vector<double> my_vector = {0, 0.1, 0.25, 0.45, 0.55, 0.7, 0.9, 1.0};
    EXPECT_DOUBLE_EQ(0.49375,calculate_average(my_vector));
}
/*
TEST(Vector_test, Calculate_average_no_values)
{
    std::vector<double> my_vector1;
    EXPECT_DOUBLE_EQ(0.0,calculate_average(my_vector1));
}
*/
int main(int argc,char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}