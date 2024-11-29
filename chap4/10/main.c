#include <stdio.h>
#include <stdlib.h>

struct sterling {
    int pounds;
    int shillings;
    int pence;
};

int main() {
    double decimal_pounds;
    struct sterling money;
    printf("Enter an amount in decimal pounds: ");
    scanf("%lf", &decimal_pounds);
    int total_pence = (int)(decimal_pounds * 240);

    money.pounds = total_pence / 240;
    total_pence %= 240;
    money.shillings = total_pence / 12;
    money.pence = total_pence % 12;
    printf("Amount in old-style currency: %d pounds, %d shillings, %d pence\n",
           money.pounds, money.shillings, money.pence);

    return 0;
}
