#include <stdio.h>
#include <math.h>

struct line{
    struct point{
        float x;
        float y;
    }point1, point2, midpoint;
    float slope;
    float distance;
};

//Solve Slope
float solveSlope(struct line line1){
	float rise = (line1.point2.y - line1.point1.y);
	float run = (line1.point2.x - line1.point1.x);
	line1.slope = rise/run;
	return line1.slope;
}

//Solve Midpoint
struct line solveMidpoint(struct line line1){
	line1.midpoint.x = (line1.point1.x + line1.point2.x)/2;
	line1.midpoint.y = (line1.point1.y + line1.point2.y)/2;
	return line1;
}

//Solve distance
float solveDistance(struct line line1){
	float x = pow(line1.point2.x-line1.point1.x, 2);
	float y = pow(line1.point2.y-line1.point1.y, 2);
	line1.distance = sqrt(x+y);
	return line1.distance;
}

//Print slope intercept form
void getSlopeInterceptForm(struct line line1){
	float b;
	float slope = solveSlope(line1);
	b = line1.point1.y - slope * line1.point1.x;
	printf("Slope Intercept Form: %fx + %f",slope,b);
	}

int main(void){
    struct line liner = {{0,0},{0,0},{0,0},0,0};
    
    printf("Enter x and y for point1: ");
    scanf("%f %f", &liner.point1.x, &liner.point1.y);

    printf("Enter x and y for point2: ");
    scanf("%f %f", &liner.point2.x, &liner.point2.y);
    
    //Line properties
    printf("Slope: %f\n", solveSlope(liner));
    printf("Midpoint: %f, %f\n", solveMidpoint(liner).midpoint.x, solveMidpoint(liner).midpoint.y);
    printf("Distance: %f\n", solveDistance(liner));
    getSlopeInterceptForm(liner);
    return 0;
}
