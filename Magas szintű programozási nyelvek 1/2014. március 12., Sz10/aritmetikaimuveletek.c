#include <stdio.h>

// @author Magyar Melinda Barbara

int main() {

    char c;
    int x, y;

    while(scanf("%d %c %d", &x, &c, &y)) {
        if((x == 0) || (y == 0))
            break;

        switch(c) {
            case '+':
                printf("%d\n", x + y);
                break;

            case '-':
                printf("%d\n", x - y);
                break;

            case '*':
                printf("%d\n", x * y);
                break;

            case '/':
                printf("%d\n", x / y);
                break;

            case '%':
                printf("%d\n", x % y);
                break;
        }
    }
    return 0;
}
