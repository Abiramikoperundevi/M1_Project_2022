#include<covid_tracking_system.h>


void covid_details(struct covid_detail s[],int temp_state,long int temp_total_case,long int temp_active_case,long int temp_recovered_case,long int temp_death_case)
{
		s[temp_state].total_case=s[temp_state].total_case + temp_total_case;
		s[temp_state].active_case=s[temp_state].active_case + temp_active_case;
		s[temp_state].recovered_case=s[temp_state].recovered_case + temp_recovered_case;
        s[temp_state].death_case=s[temp_state].death_case + temp_death_case;
}
void vaccinated_details(struct vaccinated_detail v[],int temp_state, long int temp_first_dose,long int temp_second_dose)
{
   
        v[temp_state].first_dose = v[temp_state].first_dose+temp_first_dose;
        v[temp_state].second_dose = v[temp_state].second_dose+temp_second_dose;
}

void covid_status(struct covid_detail s[], int temp_state)
{
    if(temp_state<=4){
        if(s[temp_state].total_case!=0){
        printf("\n*********** COVID STATUS **************");
        printf("\n|Total Cases              | %ld  |",s[temp_state].total_case);
        printf("\n--------------------------------");
        printf("\n|Total Active cases       | %ld  |",s[temp_state].active_case);
        printf("\n-------------------------------");
        printf("\n|Total Recovered case     | %ld  |",s[temp_state].recovered_case);
        printf("\n-------------------------------");
        printf("\n|Total Death              | %ld  |",s[temp_state].death_case);
        printf("\n-------------------------------");
        
        printf("\n**************************************");
        }
        else
        {
            printf("\n------The details of the covid cases yet not be filled------\n");
        }
    }
    else{
        printf("\nEnter the valid choice");
    }
}
void vaccinated_status(struct vaccinated_detail v[],int temp_state){
    if(temp_state<=4){
        if(v[temp_state].first_dose!=0 && v[temp_state].second_dose!=0){
        printf("\n*********** VACCINATED STATUS **************");
        printf("\n|1st dosage total count           | %ld |",v[temp_state].first_dose);
        printf("\n-------------------------------");
        printf("\n|2nd dosage total count           | %ld |",v[temp_state].second_dose);
        printf("\n-------------------------------");
    
        printf("\n**********************************************");
        }
        else
        printf("\n------The details of the vaccinated cases yet not be filled------\n");
    }
    else
    {
        printf("\nEnter the valid choice");
    }
}
