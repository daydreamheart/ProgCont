#include <stdio.h>
#include <stdlib.h>

// @author Magyar Melinda Barbara

int main () {

    int i, n = 1;
    int positive = 0, negative = 0, number, row = 0;

    while(n != 0) {
        scanf("%d", &n);

        if(n != 0) {
            row++;
            for(i = 0; i < n; i++) {
                scanf("%d", &number);
                if(number > 0)
                    positive++;
                else if(number < 0)
                    negative++;
            }
            if(positive > negative)
                printf("%d\n", row);
        }
        positive = 0;
        negative = 0;
    }
    return 0;
}
