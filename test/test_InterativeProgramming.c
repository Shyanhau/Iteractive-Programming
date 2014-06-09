#include "unity.h"
#include "InterativeProgramming.h"

void setUp(void){}

void tearDown(void){}

void test_isSubstringInString_given_abcde12345_and_abc_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1, isSubstringInString("abcde12345","abc"));
}

void test_isSubstringInString_given_abcde12345_and_bcd_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1, isSubstringInString("abcde12345","bcd"));
}

void test_isSubstringInString_given_abcabcde12345_and_bcd_should_return_1(void)
{
	TEST_ASSERT_EQUAL(1, isSubstringInString("abcabcde12345","bcd"));
}

void test_isSubstringInString_given_abcabce12345_and_bcd_should_return_0(void)
{
	TEST_ASSERT_EQUAL(0, isSubstringInString("abcabce12345","bcd"));
}

void test_isSubstringInString_given_abcabce1234_and_bcd_should_return_0(void)
{
	TEST_ASSERT_EQUAL(0, isSubstringInString("abcabce1234","bcd"));
}