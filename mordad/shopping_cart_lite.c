#include <stdio.h>

int main() {
    char item[20];
    float price;
    int quantity;

    printf("Item? ");
    scanf("%19s", item);

    printf("Price? ");
    scanf("%f", &price);

    printf("Quantity? ");
    scanf("%d", &quantity);

    printf("Total for %s: %.2f$\n", item, price*quantity);
    return 0;
}
