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
void subtract()
{
    TEST_ASSERT_EQUAL(3, sub(5,2));
}
void multi()
{
    TEST_ASSERT_EQUAL(10, multiply(5,2));
}


int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    /* Run Test functions */
    RUN_TEST(sum);
    RUN_TEST(subtract);
    RUN_TEST(multi);

    return UNITY_END();
}