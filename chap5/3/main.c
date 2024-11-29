#include <stdio.h>

void zeroSmaller(int *a, int *b) {
    if (*a < *b) {
        *a = 0;
    } else {
        *b = 0;
    }
}

int main() {
    int num1=3, num2=4;
    zeroSmaller(&num1, &num2);
    printf("%d\n%d", num1,num2);
    return 0;
}
