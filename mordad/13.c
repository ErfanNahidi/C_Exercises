#include <stdio.h>
#include <stdbool.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFulltime;
}Student;


int main(){

    Student Student1 = {"Erfan",23,5,true};
    
    printf("%s\n", Student1.name);
    printf("%d\n", Student1.age);
    printf("%.2f\n", Student1.gpa);
    printf("%s\n", (Student1.isFulltime) ? "YES":"NO");

    return 0;
}