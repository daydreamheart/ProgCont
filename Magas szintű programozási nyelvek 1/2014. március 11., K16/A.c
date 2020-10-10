#include<stdio.h>

int main()
{
    int h1, h2, m1, m2;

    while(scanf("%d", &h1))
    {
        if(h1 == -1)
            return 0;
        else
        {
            scanf("%d %d %d", &m1, &h2, &m2);

            if(((h1 * 60) + m1) > ((h2 * 60) + m2))
                printf(">\n");
            else if(((h1 * 60) + m1) < ((h2 * 60) + m2))
                printf("<\n");
            else printf("=\n");

        }
    }

    return 0;
}
