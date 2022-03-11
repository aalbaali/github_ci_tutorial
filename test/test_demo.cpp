#include "gtest/gtest.h"
#include "utils.h"

TEST(TestDemo, TestDemo) {
  EXPECT_TRUE(true);
}

TEST(MyAdd, TwoNums) {
  EXPECT_EQ(MyAdd(1, 2), 3);
}
