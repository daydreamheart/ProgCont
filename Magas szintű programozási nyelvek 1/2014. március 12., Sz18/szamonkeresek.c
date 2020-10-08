#include <stdio.h>

// @author Magyar Melinda Barbara

int main()
{
    int j, i, n;
    int container = 0, max = 0;

    while(scanf("%d", &n)) {
        if(n == 0)
            break;

        int array[n];
        for(i = 0; i < n; i++)
            scanf("%d", &array[i]);

        for(j = 0; j < n; j++)
         container += array[j];

        if(container > max)
            max = container;

        container = 0;
    }

    printf("%d\n", max);
    return 0;
}
