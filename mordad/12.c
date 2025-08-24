#include <stdio.h>
// #include <stdbool.h>

typedef enum{
    SUNDAY = 2,MONDAY = 3 ,TUESDAY = 4 ,WEDNESDAY = 5 ,THURSDAY = 6,FRIDAY = 7,SATURDAY = 1
}Day;


int main(){

    Day today = WEDNESDAY;
    
    if(today == FRIDAY || today == THURSDAY){

        printf("It's the Weekend");
    }
    else{
        printf("Its a the weekday");
    }

    return 0;
}