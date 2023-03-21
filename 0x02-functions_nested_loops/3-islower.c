#include <stdio.h>
#include <stdlib.h>

void print_alphabet_x10(void) {
    int i, j;
    for (i = 0; i < 10; i++) {
        char c = 'a';
        for (j = 0; j < 26; j++) {
            putchar(c);
            c++;
        }
        putchar('\n');
    }
}

int main() {
    print_alphabet_x10();
    return 0;
}
