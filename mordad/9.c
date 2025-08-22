#include <stdio.h>
#include <string.h>

void HappyBirthday(char *name , int age){

    printf("Happy birthday to you \n");
    printf("Happy birthday dear %s \n", name);
    printf("Happy birthday to you \n");
    printf("you are %d years old! \n", age);
}


int main(){

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name , sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    HappyBirthday(name , age);


    return 0;
}