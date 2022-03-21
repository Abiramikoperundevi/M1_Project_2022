#include<covid_tracking_system.h>


long long int covid_details(long long int temp_total_case,long long int temp_active_case,long long int temp_recovered_case,long long int temp_death_case)
{
		s[temp_state].total_case=s[temp_state].total_case + temp_total_case;
		s[temp_state].active_case=s[temp_state].active_case + temp_active_case;
		s[temp_state].recovered_case=s[temp_state].recovered_case + temp_recovered_case;
    s[temp_state].death_case=s[temp_state].death_case + temp_death_case;
}
long long int vaccinated_details(long long int temp_first_dose,long long int temp_second_dose){
   
    v[temp_state].first_dose=v[temp_state].first_dose+temp_first_dose;
    v[temp_state].second_dose=v[temp_state].second_dose+temp_second_dose;
}

int covid_status(int temp_state)
{
        printf("\n*********** COVID STATUS **************");
        printf("\n|Total Cases              | %lld  |",s[temp_state].total_case);
        printf("\n-------------------------------");
        printf("\n|Total Active cases       | %lld  |",s[temp_state].active_case);
        printf("\n-------------------------------");
        printf("\n|Total Recovered case     | %lld  |",s[temp_state].recovered_case);
        printf("\n-------------------------------");
        printf("\n|Total Death              | %lld  |",s[temp_state].death_case);
        printf("\n-------------------------------");
        
        printf("\n**************************************");
}
int vaccinated_status(int temp_state){
        printf("\n*********** VACCINATED STATUS **************");
        printf("\n|1st dosage total count           | %lld |",v[temp_state].first_dose);
        printf("\n-------------------------------");
        printf("\n|2nd dosage total count           | %lld |",v[temp_state].second_dose);
        printf("\n-------------------------------");
    
        printf("\n**************************************");
}
