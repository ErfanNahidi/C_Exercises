#include <stdio.h>

int main() {

    int dayOfweek = 0;


    printf("Enter the day of the week: ");
    scanf("%d", &dayOfweek);



    switch(dayOfweek) {

        case 1:
            printf("Its is Monday\n");
            break;
        case 2:
            printf("Its is Tuesday\n");
            break;
        case 3:
            printf("Its is Wednesday\n");
            break;
        case 4:
            printf("Its is Thursday\n");
            break;
        case 5:
            printf("Its is Friday\n");
            break;
        case 6:
            printf("Its is Saturday\n");
            break;
        case 7:
            printf("Its is Sunday\n");
            break;

    }

}