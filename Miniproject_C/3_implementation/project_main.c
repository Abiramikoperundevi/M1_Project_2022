#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct covid_details
{
	char State_name[100];
	long long int total_case;
    long long int active_case;
    long long int recovered_case;
    long long int death_case;
};
struct vaccinated_details
{
    char State_name[100];
    long long int first_dose;
    long long int second_dose;
};
struct covid_details s[10000];
struct vaccinated_details v[10000];
void covid_details();
void vaccinated_details();
void covid_status();
void vaccinated_status();
int choice,choice1;
char temp[100];
long long int temp_total_case,temp_active_case,temp_recovered_case,temp_death_case,temp_first_dose,temp_second_dose;
int tn=1, ke =2, ka = 3, ap = 4;
int temp_state;
int flag=0;
int main()
{
    for(int i=1;i<=4;i++)
    {
        s[i].total_case=0;
		s[i].active_case=0;
		s[i].recovered_case=0;
        s[i].death_case=0;
    }
    for(int j=0;j<=4;j++){
        v[j].first_dose=0;
        v[j].second_dose=0;
    }
	while(1)
	{
		printf("\n\n****************Welcome to Covid Case tracking E-Portal******************");
		printf("\n-------------------------------------------");
		printf("\n|The Services are|\n|1. COVID_DETAILS|\n|2. VACCINATED_DETAILS|\n|3. COVID_STATUS|\n|4. VACCINATED_STATUS|\n|5. EXIT|\n|Enter your choice|\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				covid_details();
				break;	
			}	
			case 2:
			{
				vaccinated_details();
				break;	
			}
			case 3:
			{
		        covid_status();	
		        break;
			}
			case 4:
			{
			    vaccinated_status();
			    break;
			}
			case 5:
			{
			    exit(1);
			}
			default:
			{
				printf("\nEnter the valid choice\n");
				break;	
			}
		}
	}	
}
void covid_details()
{
        printf("\n\n|Select the state names|\n|1. TamilNadu|\n|2. Kerala|\n|3. Karnataka|\n|4. Andra pradesh|");
        printf("\n|Enter your choice        |");
        scanf("%d",&temp_state);
        printf("\n****************COVID DETAILS****************");
        printf("\n-------------------------------");
		printf("\n|The total cases are      |");
		scanf("%lld",&temp_total_case);
		printf("\n|The Active cases are     |");
		scanf("%lld",&temp_active_case);
		printf("\n|The Recovered cases are  |");
		scanf("%lld",&temp_recovered_case);
		printf("\n|The Death cases are      |");
		scanf("%lld",&temp_death_case);
		
		printf("\n**********************************************");
		
		s[temp_state].total_case=s[temp_state].total_case + temp_total_case;
		s[temp_state].active_case=s[temp_state].active_case + temp_active_case;
		s[temp_state].recovered_case=s[temp_state].recovered_case + temp_recovered_case;
        s[temp_state].death_case=s[temp_state].death_case + temp_death_case;
}
void vaccinated_details(){
    printf("\n\n|Select the state names|\n|1.TamilNadu|\n|2. Kerala|\n|3. Karnataka|\n|4. Andra pradesh|");
    printf("\n|Enter your choice            |");
    scanf("%d",&temp_state);
    printf("\n*****************VACCINATED DETAILS*****************");
    printf("\n----------------------------------------------");
    printf("\n|Enter the 1st dosage count   |");
    scanf("%lld",&temp_first_dose);
    printf("\n|Enter the 2nd dosage count   |");
    scanf("%lld",&temp_second_dose);
    
    printf("\n**********************************************");
    v[temp_state].first_dose=v[temp_state].first_dose+temp_first_dose;
    v[temp_state].second_dose=v[temp_state].second_dose+temp_second_dose;
}

void covid_status()
{
	    printf("\n\n|Select the state names|\n1. TamilNadu\n2. Kerala\n3. Karnataka\n4. Andra pradesh");
        printf("\nEnter your choice:\t");
        scanf("%d",&temp_state);
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
void vaccinated_status(){
    printf("\n\n|Select the state names|\n|1. TamilNadu|\n|2. Kerala|\n|3. Karnataka|\n|4. Andra pradesh|");
    printf("\n|Enter your choice    |");
    scanf("%d",&temp_state);
    printf("\n*********** VACCINATED STATUS **************");
    printf("\n|1st dosage total count           | %lld |",v[temp_state].first_dose);
    printf("\n-------------------------------");
    printf("\n|2nd dosage total count           | %lld |",v[temp_state].second_dose);
    printf("\n-------------------------------");
    
    printf("\n**************************************");
}
