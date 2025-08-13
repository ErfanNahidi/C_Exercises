#include <stdio.h>

int main() {
    int age = 0;
    int year = 0;
    float height = 0.0f;
    float weight = 0.0f;
    char name[20] = "";
    char lastname[20] = "";
    char grade = '\0';

    printf("dear user, please enter your Fname and Lname: ");
    scanf("%19s%19s", name, lastname);

    printf("dear %s, please enter your age: ", name);
    scanf("%d", &age);

    printf("dear %s, please enter your height and weight: ", name);
    scanf("%f%f", &height, &weight);

    printf("dear %s, please enter your grade: ", name);
    scanf(" %c", &grade);

    printf("dear %s, please enter your birth year: ", name);
    scanf("%d", &year);
    
    printf("%s %s is %d years old and he is %.2f cm tall and %.2f kg heavy and his grade is %c and he was born in %d\n",
           name, lastname, age, height, weight, grade, year);
}
