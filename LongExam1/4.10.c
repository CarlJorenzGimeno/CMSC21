#include<stdio.h>
#include<math.h>

int main(void)
{
    int num;
    float temp=1.0, root, tol = 0.00001;

    // Input
    printf("Enter the number:");
    scanf("%d", &num);

    // Run program once because it fails otherwise
    root = ( num/temp + temp) / 2.0000;

    //Loop until root-temp is lower than tolerance
    while(fabs(root-temp) >= tol){
        //Calculate root
        temp = root;
        root = ( num/temp + temp) / 2.0000;
    }
    //Print output
    printf("The square root of '%d' is '%f'", num, root);
}
