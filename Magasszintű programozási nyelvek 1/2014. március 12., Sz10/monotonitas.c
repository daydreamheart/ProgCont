#include <stdio.h>
#include <stdlib.h>

// @author Magyar Melinda Barbara

int main () {

    int a = 0;
    int i, n, asc, desc, number;

    scanf("%d", &n);

    while(n != 0) {
        asc = 0;
        desc = 0;

        for(i = 0; i < n; i++) {
            scanf("%d", &number);

            if(i == 0);
            else {
                if(a <= number)
                    asc += 1;
                if(a >= number)
                    desc += 1;
            }

            a = number;
        }

        if(asc == n - 1 || desc == n - 1)
            printf("monoton\n");
        else
            printf("nem monoton\n");

        scanf("%d", &n);
    }
    return 0;
}
