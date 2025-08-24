#include <stdio.h>

void Birthday(int* age);

int main(){

    int age = 25;
    int *pAge = &age;

    Birthday(pAge);

    printf("Your are %d years old", age);

    return 0;
}

void Birthday(int* age){

    (*age)++;

}