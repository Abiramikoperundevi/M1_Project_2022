# Test plan and Test output

# Test plan

*Test cases are decided with the help of 
        
        
      *Total Cases
      *Active Cases
      *Recovered Cases
      *Death Cases
      *First dosage count
      *Second dosage count
      
  

* In my project covid details and vaccinated details are entered by the user and it will diplays through the covid status and vaccinated status
* I covered the covid cases details for the southern states so I choose four state i.e. Tamil Nadu, Kerala, Karnataka, Andra Pradesh in that instead of state name I gave a number for the state.
* If the given number for the states are mismatched means it will diplays the invalid case
* If the given count for active cases, recovered cases, death cases should not be execeed then Total cases.
* Second dosage count should not be execeed then the first dosage count.
* The above two cases are must to maintain.
* These are our test plans 


# Test output

The user defined values for 
      
      * Total cases - 10000
      * Active cases - 5000
      * Recovered cases - 2500
      * Death cases - 2500
      * First dosage count - 250
      * Second dosage count - 100
      The above are the values and it will display through the covid status and vaccinated status function block
      
      
* The ouput for the above cases are available in the form of image files


# TEST PLAN and Corresponding Output

## High Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
| -------:|:-----------:|:-------:|:-------:|:----------:|:------------:|
| H_01 | Check if the welcoming page is displayed properly | Program execution | Formatted Welcome Page | Formatted Welcome Page | Requirement |
| H_02 | Check if the menu is displayed properly | Login Credentials | Formatted Menu Page | Formatted Menu Page | Requirement |
| H_03 | Not Stuck inside any Function | Function call | Proper function execution with return type and message | Proper function execution with return type and message | Requirement |

## Low Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
|--------:|:-----------:|:-------:|:-------:|:----------:|:------------:|
| L_01 | Covid Details | state name ->total cases | display the total cases | display the total cases | Requirement |
| L_02 | vaccinated Details | state name ->First dose and second dose | Display the first and second dose | Display the first and second dose | Technical |
| L_03 | Covid status | Name of the state | state name->total cases | state name->total cases | Technical |
| L_04 | vaccinated status | Name of the state | state name->first and second dose count|  state name->first and second dose count| Technical |

