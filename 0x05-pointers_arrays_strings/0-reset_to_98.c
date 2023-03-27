#include <stdio.h>

void updateValue(int* ptr) {
    *ptr = 98;
}

int main() {
    int myValue = 0;
    printf("Value before update: %d\n", myValue);
    updateValue(&myValue);
    printf("Value after update: %d\n", myValue);
    return 0;
}
