#include <stdio.h>
#include <stdbool.h>

int main() {

    float price = 10.00;
    bool isStudent = false; // 10%
    bool isSenior = true; // 20%

    // student = $9
    // senior = $8
    // student + senior = $7

    if(isStudent){

        printf("You get a student discount of 10% \n");
        price *= 0.9;
} 

    if(isSenior){

        printf("You get a senior discount of 10% \n");
        price *= 0.8;
    }

    
    printf("The price of a ticket is: $%f \n",price);

}