/**
 * @file covid_tracking_system.h
 * @author Abirami G ()
 * @brief Covid and vaccinated status as like a tracking system
 * @version 0.1
 * @date 2022-03-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __COVID_TRACKING_SYSTEM_H__
#define __COVID_TRACKING_SYSTEM_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* Displays the covid details with the information of Total case, Active case, Recovered case, Death case
* @param[in] total_case 
* @param[in] active_case
* @param[in] recovered_case
* @param[in] death_case
* @return Result of the count of Total case, Active case, Recovered case, Death case
*/
long long int covid_details(long long int temp_total_case,long long int temp_active_case,long long int temp_recovered_case,long long int temp_death_case)

/**
* Displays the vaccinated details with the information of first dosage and second dosage
* @param[in] first_dose 
* @param[in] second_dose 
* @return Result of the count of first dose and second dose
*/
long long int vaccinated_details(long long int temp_first_dose,long long int temp_second_dose)

/**
* Displays the status of the covid cases with the information of Total case, Active case, Recovered case, Death case
* @param[in] temp_state 
* @return Result of the count status of Total case, Active case, Recovered case, Death case
*/
int covid_status(int temp_state)


/**
* Displays the status of the vaccinated cases with the information of first dosage and second dosage
* @param[in] temp_state
* @return Result of the count status of first dose and second dose
*/
int vaccinated_status(temp_state)

#endif  /* #define __COVID_TRACKING_SYSTEM_H__ */
