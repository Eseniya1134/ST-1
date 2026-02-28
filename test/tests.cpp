// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, ZeroAndOne) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, SmallPrimes) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(7));
}

TEST(CheckPrimeTest, SmallNonPrimes) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(9));
}

TEST(CheckPrimeTest, LargerPrimes) {
  EXPECT_TRUE(checkPrime(17));
  EXPECT_TRUE(checkPrime(19));
  EXPECT_TRUE(checkPrime(97));
}

TEST(CheckPrimeTest, LargerNonPrimes) {
  EXPECT_FALSE(checkPrime(18));
  EXPECT_FALSE(checkPrime(20));
  EXPECT_FALSE(checkPrime(100));
}

TEST(NPrimeTest, FirstFewPrimes) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
  EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, LaterPrimes) {
  EXPECT_EQ(nPrime(10), 29);
  EXPECT_EQ(nPrime(20), 71);
  EXPECT_EQ(nPrime(50), 229);
}

TEST(NextPrimeTest, AfterSmallNumbers) {
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(11), 13);
  EXPECT_EQ(nextPrime(17), 19);
}

TEST(NextPrimeTest, AfterLargerNumbers) {
  EXPECT_EQ(nextPrime(100), 101);
  EXPECT_EQ(nextPrime(200), 211);
}

TEST(SumPrimeTest, SmallRanges) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(20), 77);
}

TEST(SumPrimeTest, LargeRange) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(res, expected);
}
