#include <stdio.h>

int main() {

    int age = 0;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can see this videos\n");
    }
    else if(age <= 0) {
        printf("You didn't born yet\n");

    }
    else {
        printf("You can't see this video\n");
    }

}