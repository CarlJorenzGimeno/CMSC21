#include <stdio.h>

int main(void){
    //variables to store the no of days, starting day and counter for looping.
    int days, starting_day,counter;
    //First check for valid input for days
    while (days > 32 || days < 27){
        printf("Enter number of days in month:");
        scanf("%d", &days);
        if (days >32 || days < 27){
            printf("Error! Invalid input.\nPlease try again.\n\n");
        }
    }
    //Second check for valid input for starting day
    while (starting_day > 7 || starting_day < 1){
        printf("Enter the starting day of the week (1=Sun, 7=Sat):");
        scanf("%d", &starting_day);
        if (starting_day > 7 || starting_day < 1){
            printf("Error! Invalid input.\nPlease try again.\n\n");
        }
    }
    //Subtract one from the value to correspond to the value of modulo of 7
    starting_day--;

    //Loop to print blanks before the first date
    //Subtract one from the condition to prevent ensure correct placement of first date according to modulo of 7
    while (counter <= starting_day-1){
        printf("   ");
        counter++;
    }

    //Loop to print date and newline every 7 print commands
    while (counter < days+starting_day){
        //Checks if a newline should be printed instead of a space
        if (counter%7 < 6){
            //Addition to prevent program from printing zero as its first date
            printf("%2d ",counter-starting_day+1);
        }
        else{
            //Prints a newline instead of a space after the date
            printf("%2d\n",counter-starting_day+1);
        }
        counter++;
    }


    return 0;
}
