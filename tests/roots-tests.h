#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "roots.h"
}
TEST(rootsTest, equal0)
{
    ASSERT_EQ(equation(1,4,4)->count, 1);
    ASSERT_EQ(equation(1,4,4)->x1, -2);
}
TEST(rootsTest, more0)
{
    ASSERT_EQ(equation(1,3,-4)->count, 2);
    ASSERT_EQ(equation(1,3,-4)->x1, 1);
    ASSERT_EQ(equation(1,3,-4)->x2, -4);
}

TEST(rootsTest, less0)
{
    ASSERT_EQ(equation(1,-4,5)->count, 0);    
}

TEST(rootsTest, other)
{
  ASSERT_EQ(equation(1,-6,5)->count, 2);
  ASSERT_EQ(equation(1,-6,5)->x2, 5);
  ASSERT_EQ(equation(1,-6,5)->x2, 1);    
}
