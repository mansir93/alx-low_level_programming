#include <stdio.h>
#include <stdlib.h>

void print_alphabet(void) {
    char c = 'a';
    while (c <= 'z') {
        putchar(c);
        c++;
    }
    putchar('\n');
}

int main() {
    print_alphabet();
    return 0;
}
