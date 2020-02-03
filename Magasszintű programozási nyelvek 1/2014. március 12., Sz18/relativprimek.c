#include <stdio.h>

// @author Magyar Melinda Barbara

int main () {

    int number1, number2, divider = 0;

    while(scanf("%d %d", &number1, &number2) != EOF) {
        while(number2 && number1 > 0) {
            divider = number2;
            number2 = number1 % number2;
            number1 = divider;
        }

       if (divider == 1)
            printf("YES\n");
        else
            printf("NO\n");
       }

    return 0;
}
