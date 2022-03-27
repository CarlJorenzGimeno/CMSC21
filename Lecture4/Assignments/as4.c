#include <stdio.h>

int main(void){
    int i;
    printf(" n   2 to the n\n--- ----------\n");
    for (i = 0; i <= 10; i++){
        printf(" %2d      %-4d\n", i, (int)pow((double) 2,i));
    }

    return 0;
}
