#include<covid_tracking_system.h>

/* required parameters for the covid details are available in structure covid_details*/
/*struct covid_detail
{
	char State_name[100];
	long long int total_case;
    	long long int active_case;
    	long long int recovered_case;
    	long long int death_case;
}*/
//struct covid_detail ss[100];
/* required parameters for the vaccinated details are available in structure vaccinated_details*/
/*struct vaccinated_detail
{
    	char State_name[100];
    	long long int first_dose;
    	long long int second_dose;
}*/ 
//struct vaccinated_detail vv[100];
//typedef struct covid_detail s;
struct covid_detail ss[100];//={{"1",0,0,0,0},{"2",0,0,0,0},{"3",0,0,0,0},{"4",0,0,0,0},{ NULL,0,0,0,0 }};
//typedef struct vaccinated_detail v;
struct vaccinated_detail vv[100];//={{"1",0,0},{"2",0,0},{"3",0,0},{"4",0,0},{ NULL,0,0 }};

void covid_details();
void vaccinated_details();
void covid_status();
void vaccinated_status();
int choice,choice1;
int temp_total_case,temp_active_case,temp_recovered_case,temp_death_case,temp_first_dose,temp_second_dose;

/* numbers are assigned instead of mentioning the name of the state*/
int temp_state;
int main()
{
	 //covid cases assigned by user
    for(int i=1;i<=4;i++)
    {
        ss[i].total_case=0;
		ss[i].active_case=0;
		ss[i].recovered_case=0;
        ss[i].death_case=0;
    }
	 //vaccinated cases assigned by user
    for(int j=0;j<=4;j++){
        vv[j].first_dose=0;
        vv[j].second_dose=0;
    }
	/* start of the application*/
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
			    printf("\n\n|Select the state names|\n|1. TamilNadu|\n|2. Kerala|\n|3. Karnataka|\n|4. Andra pradesh|");
                printf("\n|Enter your choice        |");
                scanf("%d",&temp_state);
                if(temp_state<=4)
				{
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
                }
                else
                {
                    printf("\nOops! Enter the valid choice");
                }
				covid_details(ss,temp_state,temp_total_case,temp_active_case,temp_recovered_case,temp_death_case);
				
				break;	
			}	
			case 2:
			{
			    printf("\n\n|Select the state names|\n|1.TamilNadu|\n|2. Kerala|\n|3. Karnataka|\n|4. Andra pradesh|");
				printf("\n|Enter your choice            |");
				scanf("%d",&temp_state);
				if(temp_state<=4)
				{
					printf("\n*****************VACCINATED DETAILS*****************");
					printf("\n----------------------------------------------");
					printf("\n|Enter the 1st dosage count   |");
					scanf("%lld",&temp_first_dose);
					printf("\n|Enter the 2nd dosage count   |");
					scanf("%lld",&temp_second_dose);
					printf("\n**********************************************");
				}
                else
                {
                    printf("\nOops! Enter the valid choice");
                }
				vaccinated_details(vv,temp_state,temp_first_dose,temp_second_dose);
				break;	
			}
			case 3:
			{
			    printf("\n\n|Select the state names|\n1. TamilNadu\n2. Kerala\n3. Karnataka\n4. Andra pradesh");
                printf("\nEnter your choice:\t");
                scanf("%d",&temp_state);
		    	covid_status(ss,temp_state);	
		        break;
			}
			case 4:
			{
			    printf("\n\n|Select the state names|\n|1. TamilNadu|\n|2. Kerala|\n|3. Karnataka|\n|4. Andra pradesh|");
                	    printf("\n|Enter your choice    |");
                	    scanf("%d",&temp_state);
			    vaccinated_status(temp_state);
			    break;
			}
			case 5:
			{
			    exit(1);
			}
			default:
			{
				printf("\n--Enter the valid choice--\n");
				break;	
			}
		}
	}	
}
