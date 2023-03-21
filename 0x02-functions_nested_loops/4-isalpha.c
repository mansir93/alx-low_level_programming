#include <stdio.h>
#include <stdlib.h>

int _isalpha(int c);

int main() {
    char c = 'A';
    if (_isalpha(c)) {
        printf("%c is an alphabetic character.\n", c);
    } else {
        printf("%c is not an alphabetic character.\n", c);
    }
    return 0;
}

int _isalpha(int c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}
