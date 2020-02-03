#include <stdio.h>

// @author Magyar Melinda Barbara

int main() {

    int x;
    int sum = 0;

    while(scanf("%d USD", &x)) {
        if(x < 0)
            break;

        sum += x;
    }
    printf("%d HUF\n", sum * 226);
    return 0;
}
