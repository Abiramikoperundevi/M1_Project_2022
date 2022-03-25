#include<covid_tracking_system.h>


long int covid_details(struct covid_detail s[],int temp_state,long int temp_total_case,long int temp_active_case,long int temp_recovered_case,long int temp_death_case)
{
		s[temp_state].total_case=s[temp_state].total_case + temp_total_case;
		s[temp_state].active_case=s[temp_state].active_case + temp_active_case;
		s[temp_state].recovered_case=s[temp_state].recovered_case + temp_recovered_case;
        s[temp_state].death_case=s[temp_state].death_case + temp_death_case;
}
long int vaccinated_details(struct vaccinated_detail v[],int temp_state, long long int temp_first_dose,long long int temp_second_dose)
{
   
        v[temp_state].first_dose = v[temp_state].first_dose+temp_first_dose;
        v[temp_state].second_dose = v[temp_state].second_dose+temp_second_dose;
}

int covid_status(struct covid_detail s[], int temp_state)
{
    if(temp_state<=4){
        if(s[temp_state].total_case!=0){
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
        else
        {
            printf("\n------The details of the covid cases yet not be filled------\n");
        }
    }
    else{
        printf("\nEnter the valid choice");
    }
}
int vaccinated_status(struct vaccinated_detail v[],int temp_state){
    if(temp_state<=4){
        if(v[temp_state].first_dose!=0 && v[temp_state].second_dose!=0){
        printf("\n*********** VACCINATED STATUS **************");
        printf("\n|1st dosage total count           | %lld |",v[temp_state].first_dose);
        printf("\n-------------------------------");
        printf("\n|2nd dosage total count           | %lld |",v[temp_state].second_dose);
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
