#include <stdio.h>

int main (void){
    //Initialize
    int digit1,digit2,digit3;
    //Input line
    printf("Please enter a 3-digit number:");
    //Assigns 3 digits into 3 variables
    scanf("%1d%1d%1d",&digit1, &digit2, &digit3);
    //Print the digits in reverse
    printf("Reverse:%d%d%d", digit3, digit2,digit1);
    return 0;
}
