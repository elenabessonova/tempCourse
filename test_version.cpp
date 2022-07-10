#include "lib.h"

#include <gtest/gtest.h>

TEST(version, valid)
{
  EXPECT_GT(version(), 0);
  
}
