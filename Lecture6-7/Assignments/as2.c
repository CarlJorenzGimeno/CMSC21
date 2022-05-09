#include <stdio.h>
#include <stdbool.h>

#define DESTINATION 8

int main(){
    int location, last_location;
    //Initialize road networks
    bool road_networks[DESTINATION][DESTINATION] = {[0][0]=true,[0][1]=true,[0][5]=true,
                                                        [1][0]=true,[1][1]=true,[1][2]=true,
                                                        [2][1]=true,[2][2]=true,[2][4]=true,[2][5]=true,
                                                        [3][3]=true,[3][4]=true,
                                                        [4][3]=true,[4][4]=true,
                                                        [5][0]=true,[5][2]=true,[5][5]=true,[5][3]=true,
                                                        [6][0]=true,[6][3]=true,[6][6]=true,
                                                        [7][5]=true,[7][7]=true,
                                                        };
    //Iterate through the 2d array and print them
    for (int i = 0; i <= DESTINATION; i++){
        for (int j = 0; j <= DESTINATION; j++){

            // Print the blank space on the top right
            if (i == 0 && j==0){
                printf("%-5s","");
            }

            //Print the headers with special cases on the charging stations
            else if (i == 0){
                if (j == 3 || j == 4){
                    printf("[%c]   ",j+64);
                }
                else{printf(" %-5c",j+64);}
            }
            //Print the side labels with special cases on the charging stations
            else if (i != 0 && j == 0){
                if (i == 3 || i == 4){
                    printf("[%c]  ",i+64);
                }
                else{printf("%-5c",i+64);}
            }

            //Print 1 on roads with access
            //Print 0 otherwise
            else if (road_networks[i-1][j-1]==true){
                printf(" %-5s","1");
            }
            else{printf(" %-5s","0");}
        }
        printf("\n");
    }

    printf("%d",2^3);
    //Input
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d",&location);
    printf("At point: %c\n",location+65);

    //Loop to find nearest charging station
    while(location != 2 || location !=3){
        //Check if location has access to charging station
        if (road_networks[location][2]){
            location = 2;
        }
        else if (road_networks[location][3]){
            location = 3;
        }

        //Check all available routes
        //Has a failsafe to prevent going back and forth between two routes.
        else{
            for (int i = 0; i < DESTINATION; i++){
                if (road_networks[location][i] && i !=location && i != last_location){
                    last_location = location;
                    location = i;
                    break;
                }

            }
        }

        //Prints location
        if (location == 2 || location == 3){
            printf("Point %c: Arrived at the charging station.", location+65);
            break;
        }
        else{printf("Now at point: %c\n", location+65);}
    }
    return 0;
}
