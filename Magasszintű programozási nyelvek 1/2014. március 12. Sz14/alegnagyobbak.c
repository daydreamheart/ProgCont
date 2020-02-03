#include <stdio.h>

// @author Magyar Melinda Barbara

int main() {

    int n, i, j, k;
    int count = 0;

    while(scanf("%d", &n)) {
        if(n == 0)
            break;

        int array[n];

        for(i = 0; i < n; i++)
            scanf("%d", &array[i]);

        int max = array[0];

        for(j = 1; j < n; j++)
            if(max < array[j])
                max = array[j];

        for(k = 0; k < n; k++)
            if(array[k] == max)
                count++;

        printf("%d\n", count);
        max = 0;
        count = 0;
    }
    return 0;
}
