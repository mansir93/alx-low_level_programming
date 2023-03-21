#include <stdio.h>
#include <stdlib.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1;
    } else if (n == 0) {
        printf("0");
        return 0;
    } else {
        printf("-");
        return -1;
    }
}

int main() {
    int num = -5;
    int sign = print_sign(num);
    printf("\nThe sign of %d is %d\n", num, sign);
    return 0;
}
