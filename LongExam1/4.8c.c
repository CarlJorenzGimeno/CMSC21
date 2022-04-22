#include <stdio.h>

int main(void){
    int a = 2, b = 3;
    if ( b == 3 ){
        if ( a == 2 )
            printf( "*****\n" );
        else{
            printf( "-----\n" );
            printf( ">>>>>\n" );
            }
    printf( "<<<<<\n" );
    }

    return 0;
}
