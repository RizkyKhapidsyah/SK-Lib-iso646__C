#include <stdio.h>
#include <iso646.h>
#include <conio.h>

int main() {
    int a = 1, b = 2;
    int x = 3, y = 4;

    if (not a < b) {
        puts("a < b");
    } else {
        puts("not a < b");
    }

    if (a < b or x > y) {
        puts("true 1");
    } else {
        puts("false 1");
    }

    if (a < b and x < y) {
        puts("true 2");
    } else {
        puts("false 2");
    }

    _getch();
    return 0;
}
