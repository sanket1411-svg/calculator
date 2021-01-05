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
void subtract1()
{
    TEST_ASSERT_EQUAL(-3, sub(-5,-2));
}
void multi()
{
    TEST_ASSERT_EQUAL(42250000, multiply(6500,6500));
}
void div()
{
    TEST_ASSERT_EQUAL(5.0, division(10.0,2.0));
}
void sq()
{
    TEST_ASSERT_EQUAL(16, square(4));
}
void sq1()
{
    TEST_ASSERT_EQUAL(16, square(-4));
}
void cu()
{
    TEST_ASSERT_EQUAL(64, cube(4));
}
void cu1()
{
    TEST_ASSERT_EQUAL(-64, cube(-4));
}
void cube_rt()
{
    TEST_ASSERT_EQUAL(4, cube_root(64));
}
void sq_rt()
{
    TEST_ASSERT_EQUAL(4, square_root(16));
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
    RUN_TEST(subtract1);
    RUN_TEST(multi);
    RUN_TEST(div);
    RUN_TEST(sq);
    RUN_TEST(sq1);
    RUN_TEST(cu);
    RUN_TEST(cu1);
    RUN_TEST(cube_rt);
    RUN_TEST(sq_rt);
    

    return UNITY_END();
}