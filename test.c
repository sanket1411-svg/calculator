#include "calc.h"
#include "unity.h"
#include "unity_internals.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void sum()
{
    TEST_ASSERT_EQUAL(3, add(1,2));
}

void sum1()
{
    TEST_ASSERT_EQUAL(-3, add(-1,-2));
}
void sum2()
{
    TEST_ASSERT_EQUAL(1, add(-1,+2));
}

void subtract()
{
    TEST_ASSERT_EQUAL(3, sub(5,2));
}
void multi()
{
    TEST_ASSERT_EQUAL(42250000, multiply(6500,6500));
}
void div()
{
    TEST_ASSERT_EQUAL(5.0, division(10.0,2.0));
}



int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    /* Run Test functions */
    RUN_TEST(sum);
    RUN_TEST(sum1);
    RUN_TEST(sum2);
    RUN_TEST(subtract);
    RUN_TEST(multi);
    RUN_TEST(div);
    

    return UNITY_END();
}