#include "dw.h"
#include <gtest/gtest.h>

TEST(CounterLog, IncrementsAndReadsCounts) {
  Counter_log log(3);
  log.increment(1);
  log.increment(1);
  log.increment(2);
  EXPECT_EQ(log.get_count(0), 0);
  EXPECT_EQ(log.get_count(1), 2);
  EXPECT_EQ(log.get_count(2), 1);
}

TEST(CounterLog, ResizeResetsCounts) {
  Counter_log log(2);
  log.increment(0);
  log.resize(4);
  EXPECT_EQ(log.get_size(), 4);
  EXPECT_EQ(log.get_count(0), 0);
}
