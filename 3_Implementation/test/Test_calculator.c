#include "unity.h"
#include "calculator.h"

/* Write project_name */
#include "calculator.h"
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

/* Required by the unity test framework */
void setUp()
{

}
/* Required by the unity test framework */
void tearDown()
{

}
/* Start of the application test */
int main()
{  
    /* Initiate the Unity Test Framework */
     UNITY_BEGIN();
    /* Run Test functions */
     RUN_TEST(test_add);
     RUN_TEST(test_subtract);
     RUN_TEST(test_multiply);
     RUN_TEST(test_divide);
    /* close the Unity Test Framework */
    return UNITY_END();
}
/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30.0, add(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000.0, add(7500, 7500));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3.0, subtract(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100.0, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0.0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10.0, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0.0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.0, divide(2, 2));
}

/*void test_division(void)
{
    int n1 = 100, n2 = 20;
    TEST_ASSERT_EQUAL(5, division(n1, n2));
    TEST_ASSERT_EQUAL(2, division(n2, n1));
    TEST_ASSERT_EQUAL(2, division(n2, n1));

}
void test_add(void)
{
    int n1 = 100, n2 = 20;
    int n3 = -100, n4 =20;
    int n5 = -100, n6 =-20;
    TEST_ASSERT_EQUAL(120, addition(n1, n2));
    TEST_ASSERT_EQUAL(80, addition(n3, n4));
    TEST_ASSERT_EQUAL(120, addition(n5, n6));

}*/

//int main()
//{   UNITY_BEGIN();
    /* Run Test functions */
    //RUN_TEST(test_division);
    // RUN_TEST(test_add);
    /* close the Unity Test Framework */
    //return UNITY_END();
    