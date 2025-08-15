#include <stdio.h>
#include <string.h>

int main() {
    char item[50] = "";
    double price = 0.0;
    int quantity = 0;
    char currency = '$';
    double total = 0.0;

    printf("What item would you like to buy?: ");
    fgets(item , sizeof(item) , stdin);
    item[strcspn(item, "\n")] = 0;

    printf("What is price for each?: ");
    if(scanf("%lf", &price) != 1) return 1;

    printf("How many would you like?: ");
    if(scanf("%d", &quantity) != 1) return 1;

    total = price * quantity;
    printf("Total for %s: %.2f%c\n", item, total, currency);

    return 0;
}
