#include "gtest/gtest.h"
#include "gmock/gmock.h"

//extern "C"{
#include "add.h"
//}


TEST(ARRAY_TEST, calculate_test) {
    int a=3,b=4;
    EXPECT_EQ(7, add(a, b));
}

#if 1
int main(int argc, char *argv[])
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
#endif