/* Adds two fractions */

#include <stdio.h>

int main(void){
    //Declaring variables
    int num1, denom1, num2, denom2, result_num, result_denom;

    /*Prints text and scans for an input
    Input is then assigned to variables
    */
    printf("Enter first fraction: ");
    scanf("%d/$d", &num1, &denom1);

    /*Same thing applies*/
    printf("Enter second fraction: ");
    scanf("%d/$d", &num2, &denom2);

    //Cross multiply the fractions and add the two products to obtain result numerator
    result_num = num1 * denom2 + num2 * denom1;
    //Multiply both denominators to obtain result denominator
    result_denom = denom1 * denom2;

    //Print resulting fraction
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
