#include <stdio.h>

#define SIZE 5

int main() {
    //A
    int arr[SIZE] = {1,2,3,4,5};
    
    //B
    int *ptr;
    
    //C
    ptr = &arr[0];
    
    //D
    for (int i = 0; i < SIZE; i++){
        printf("%d", *ptr+i);
    } 
    
    //E
    for (int i = 0; i < SIZE; i++){
        printf("%d", *(arr + i));
    } 

    
    //F.1
    arr[1];
    //F.2
    *(arr + 1);
    //F.3
    *ptr+1;
    //F.4
    ptr[1];

    //G
    //ptr+2 references address 2508 and contains the value 3
    
    return 0;
}
