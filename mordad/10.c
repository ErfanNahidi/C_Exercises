#include <stdio.h>
#include <stdbool.h>

bool CheckAge(int age){

    if(age >= 18){
        return true;
    }
    else{
        return false;
    }

}


int main()  {

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(CheckAge(age)){
        printf("you can sign up \n");
    }
    else{
        printf("you are under 18 and you must be +18 \n");
    }

    return 0;
}