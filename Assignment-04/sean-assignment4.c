#include <stdio.h>
#include <math.h>

#define PIE 3.14

float calculate(int radius){
    return pow(radius, 2) * PIE;
}

int main() {
    double radius;
    char *userInput;
    
    printf("Enter the radius of your circle: ");
    scanf("%ms", &userInput);

    if(sscanf(userInput, "%lf", &radius) == 1)
        printf("This circle has an area of %.3lf units\n", calculate(radius));
    else
        printf("Please enter a number!\n");

    return 0;
}