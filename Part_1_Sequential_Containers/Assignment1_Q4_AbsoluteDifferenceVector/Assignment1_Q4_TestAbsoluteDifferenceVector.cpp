#include "gtest/gtest.h"
#include "Assignment1_Q4_AbsoluteDifferenceVector.h"

typedef enum error_t
{
    SUCESS,
    FAILURE
}
TEST(Vector_test, Calculate_Average)
{
    std::vector<double> myvector ={0, 0.1, 0.25, 0.45, 0.55, 0.7, 0.9, 1.0};
    EXPECT_DOUBLE_EQ(0.49375, Calculate_Average(myvector));

    std::vector<double> myvector1;
    EXPECT_DOUBLE_EQ(0.0, Calculate_Average(myvector));
}

int main(int argc, char **argc)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TEST();
}