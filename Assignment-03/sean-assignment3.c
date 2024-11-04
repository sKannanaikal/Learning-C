#include <stdio.h>
#include <stdlib.h>

int main() {
    char *firstName;
    char *lastName;

    printf("Enter your first name: ");
    scanf("%ms", &firstName); //the %m modifier in this context is a glibc construct which dynamically allocates enough
    printf("Enter your last name: ");
    scanf("%ms", &lastName); //data based on the user input, secures against buffer overflows even with scanf

    printf("Welcome %s %s! We have been waiting.\n", firstName, lastName);

    return 0;
}