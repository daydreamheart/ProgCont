#include <stdio.h>
#include <stdlib.h>

// @author Magyar Melinda Barbara

int main () {

    int x, y;
    int max = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    while(scanf("%d:%d", &x, &y) != EOF) {
        sum1 += x;
        sum2 += y;
        sum3 = x - y;

        if(sum3 > max)
            max = sum3;
    }

    printf("%d:%d\n", sum1, sum2);
    printf("%d\n", max);

    return 0;
}
