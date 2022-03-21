#include <stdio.h>

int main(void){
    //Initialize
    int digit1,digit2;
    //Input line
    printf("Please enter a 2-digit number:");
    //Assigns 2 digits into 2 variables
    scanf("%1d%1d",&digit1, &digit2);

    switch(digit1){
        case 9:
            printf("Ninety");
            break;
        case 8:
            printf("Eighty");
            break;
        case 7:
            printf("Seventy");
            break;
        case 6:
            printf("Sixty");
            break;
        case 5:
            printf("Fifty");
            break;
        case 4:
            printf("Fourty");
            break;
        case 3:
            printf("Thirty");
            break;
        case 2:
            printf("Twenty");
            break;
        case 0:
            break;
    }

    if (digit1!=1 && digit2 != 0){
        printf("-");
        switch(digit2){
            case 9:
                printf("nine");
                break;
            case 8:
                printf("eight");
                break;
            case 7:
                printf("seven");
                break;
            case 6:
                printf("six");
                break;
            case 5:
                printf("five");
                break;
            case 4:
                printf("four");
                break;
            case 3:
                printf("three");
                break;
            case 2:
                printf("two");
                break;
            case 1:
                printf("one");
                break;
        }
    }

    if (digit1 == 1){
        switch(digit2){
            case 1:
                printf("Eleven");
                break;
            case 2:
                printf("Twelve");
                break;
            case 3:
                printf("Thirteen");
                break;
            case 4:
                printf("Fourteen");
                break;
            case 5:
                printf("Fifteen");
                break;
            case 6:
                printf("Sixteen");
                break;
            case 7:
                printf("Seventeen");
                break;
            case 8:
                printf("Eighteen");
                break;
            case 9:
                printf("Nineteen");
                break;
            case 0:
                printf("Ten");
                break;
        }
    }
    return 0;
}
