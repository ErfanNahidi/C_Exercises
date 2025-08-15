#include <stdio.h>
#include <string.h>

int main() {

    // MAD LIBS GAME

    char noun[50] = "";
    char verb[50] = "";
    char adj1[50] = "";
    char adj2[50] = "";
    char adj3[50] = "";

    printf("Enter an adj(description): ");
    fgets(adj1 , sizeof(adj1) , stdin);

    printf("Enter a noun (animal or person): ");
    fgets(noun , sizeof(noun) , stdin);

    printf("Enter an adj(description): ");
    fgets(adj2 , sizeof(adj2) , stdin);

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb , sizeof(verb) , stdin);

    printf("Enter an adj(description): ");
    fgets(adj3 , sizeof(adj3) , stdin);

    printf("%s\n" , noun);
    printf("%s\n" , verb);
    printf("%s\n" , adj1);
    printf("%s\n" , adj2);
    printf("%s\n" , adj3);

    return 0;
}