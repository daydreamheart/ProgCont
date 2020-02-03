#include <stdio.h>

// @author Magyar Melinda Barbara

int main()
{
    int number1, number2, number3;

    while(scanf("%d %d %d", &number1, &number2, &number3)) {
        if((number1 == 0) && (number2 == 0) && (number3 == 0))
            break;

        if((number2 <= number3) && (number2 <= number1) && (number3 <= number1))
            printf("%d\n", number3);
        else if((number2 <= number1) && (number2 <= number3) && (number1 <= number3))
            printf("%d\n", number1);
        else if((number1 <= number2) && (number1 <= number3) && (number2 <= number3))
            printf("%d\n", number2);
        else if((number1 <= number3) && (number1 <= number2) && (number3 <= number2))
            printf("%d\n", number3);
        else if((number3 <= number2) && (number3 <= number1) && (number2 <= number1))
            printf("%d\n", number2);
        else if((number3 <= number1) && (number3 <= number2) && (number1 <= number2))
            printf("%d\n", number1);
    }
    return 0;
}
