#include <stdio.h>

int main(){
    char * userInput;
    int numerator;
    int denominator;

    printf("Enter a numerator: ");
    scanf("%ms", &userInput);

    if(sscanf(userInput, "%d", &numerator) != 1) {
        printf("[-] Error Processing Numerator");
        return -1;
    }

    printf("Enter a denominator: ");
    scanf("%ms", &userInput);
    if(sscanf(userInput, "%d", &denominator) != 1){
        printf("[-] Error Processing Denominator");
        return -2;
    }

    if(numerator % denominator != 0){
        printf("[+] There is a remainder!\n");
        return 0;
    }

    printf("[+] There is no remainder!\n");
    return 0;
}