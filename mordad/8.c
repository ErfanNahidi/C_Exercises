#include <stdio.h>
#include <stdbool.h>

int main()
{

    float price = 10.00;
    bool isStudent = true; // 10%
    bool isSenior = true;  // 20%

    // student = $9
    // senior = $8
    // student + senior = $7

    if (isStudent && isSenior){

        price *= 0.7;
        printf("You get a student and senior discount of 30% \n");
    }
    else if (isStudent){
        price *= 0.9;
        printf("You get a student discount of 10% \n");
    }
    else if (isSenior){
        price *= 0.8;
        printf("You get a senior discount of 20% \n");
    }

    printf("The price of a ticket is: $%.2f \n", price);
}