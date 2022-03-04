/* Prints int and float values in various formats */

#include <stdio.h>

int main(void)
{
    //Declaring variables
    int i;
    float x;

    //Assigning values to variables
    i = 40;
    x = 839.21f;

    /*
    Print output with the following format respectively:
    Print i,
    Allocate 5 spaces and print i,
    Allocate 5 spaces and print i on the left,
    Allocate 5 spaces, print i with a leading 0 since argument requires 3 digits,
    New line
    */
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    /*
    Print output with the following format respectively:
    Allocate 10 spaces and print x with 3 decimal places,
    Allocate 10 spaces and print x in exponential form,
    Allocate 10 spaces and print x, either with exponential or decimal form, on the left,
    New line
    */
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}
