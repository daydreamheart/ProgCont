#include<stdio.h>

int main()
{
    int x, y, group1 = 0, group2 = 0, max = 0;

    while(scanf("%d:%d", &x,&y) != EOF)
    {
        if((x-y) > max)
            max = x-y;

        group1 += x;
        group2 += y;
    }

    printf("%d:%d\n", group1, group2);
    printf("%d\n", max);

    return 0;
}
