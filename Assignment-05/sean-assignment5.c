#include <stdio.h>
#include <math.h>

#define SECONDS_IN_HOUR 3600
#define SECONDS_IN_MINUTE 60

int main() {
    long hours;
    long minutes;
    long seconds;
    long temp;
    char *userInput;

    printf("Enter the number of seconds: ");
    scanf("%ms", &userInput);

    if (sscanf(userInput, "%ld", &temp) == 1) {
        seconds = temp;
        hours = (long) floor(seconds / SECONDS_IN_HOUR);
        seconds -= SECONDS_IN_HOUR * hours;
        minutes = (long) floor(seconds / SECONDS_IN_MINUTE);
        seconds -= SECONDS_IN_MINUTE * minutes;
        printf("%ld seconds is %ld hours %ld minutes and %ld seconds\n", 
                temp, hours, minutes, seconds);
    }
    else
        printf("Please enter a number!\n");

    return 0;
}