#include <stdio.h>

int main (void){
    //Initialize
    int digit1,digit2;
    //Input
    printf("Please enter a 2-digit number:");
    //Assigns 2 digits into 2 variables
    scanf("%1d%1d",&digit1, &digit2);
    //Swap the digits when printing
    printf("Reverse:%d%d", digit2,digit1);
    return 0;
}
