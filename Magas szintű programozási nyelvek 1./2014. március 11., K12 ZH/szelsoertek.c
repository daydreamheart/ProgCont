#include <stdio.h>

// @author Magyar Melinda Barbara

int main() {

    int i, n = 1;

    while (n > 0) {

        scanf("%d", &n);

        if(n > 0) {
            int numbers[n];

            for(i = 0; i < n; i++)
                scanf("%d", &numbers[i]);

            if(numbers[0] == numbers [i - 1])
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
