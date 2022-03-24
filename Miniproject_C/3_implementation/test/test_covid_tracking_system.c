#include "unity.h"
#include <covid_tracking_system.h>

/* Modify these two lines according to the project */
#include <covid_tracking_system.h>
#define PROJECT_NAME    "Covid Tracking System"

/* Prototypes for all the test functions */
void test_covid_details(void);
void test_vaccinated_details(void);
void test_covid_status(void);
void test_vaccinated_status(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_covid_details);
  RUN_TEST(test_vaccinated_details);
  RUN_TEST(test_covid_status);
  RUN_TEST(test_vzccinated_status);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_covid_details(void) {
  TEST_ASSERT_EQUAL(100,50,25,25, covid_details(100,50,25,25));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(200,100,50,50, covid_details(200,100,50,50));
}

void test_vaccinated_details(void) {
  TEST_ASSERT_EQUAL(250,100, vaccinated_details(250,100));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100,75, vaccinated_details(100,75));
}

void test_covid_status(void) {
  TEST_ASSERT_EQUAL(100,50,25,25, covid_status(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(200,100,50,50, covid_status(4));
}

void test_vaccinated_status(void) {
  TEST_ASSERT_EQUAL(250,100, vaccinated_status(2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100,75, vaccinated_status(1));
}
© 2022 GitHub, Inc.
Terms
Privacy
