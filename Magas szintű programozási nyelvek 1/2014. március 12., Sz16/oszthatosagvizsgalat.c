#include <stdio.h>

// @author Magyar Melinda Barbara

int main() {

    int i,;
    int number1, number2;
    int count = 0, space = 0;

    while(scanf("%d %d", &number1, &number2)) {
        if(number1 > number2)
            break;

        for(i = number1; i <= number2; i++)
            if((i % 3 == 0) && (i % 9 != 0))
                count++;

        space = count - 1;

        for(i = number1; i <= number2; i++) {
            if((i % 3 == 0) && (i % 9 != 0)) {
                if(count > 1) {
                        printf("%d", i);

                        if(space != 0) {
                            printf(" ");
                            space--;
                        }
                } else if(count == 1)
                    printf("%d", i);
            }
        }

        if(count == 0)
            printf("-1");

        count = 0;

        printf("\n");
    }
    return 0;
}
