#include <stdio.h>

// @author Magyar Melinda Barbara

int main () {

    int i, n = 1
    int min = 0, max = 0;

    while(n!= 0) {
        scanf("%d", &n);
        int number[n];

        if(n != 0) {
            for(i = 0; i < n; i++)
                scanf("%d", &number[i]);

            min = number[0];
            max = number[0];

            for(i = 0; i < n; i++)
                if(number[i] > max)
                    max = number[i];
                else if(number[i] < min)
                    min = number[i];

            printf("%d %d\n", min, max);
            min = 0;
            max = 0;
        }
   }
    return 0;
}
