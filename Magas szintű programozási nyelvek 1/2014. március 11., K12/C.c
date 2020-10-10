#include<stdio.h>

int main()
{
    int n, num;
    int first, last;

    while(1)
    {
        scanf("%d", &n);

        if(n == 0)
            return 0;
        else
        {
            for(int i = 0; i < n; i++)
            {
                scanf("%d", &num);

                if(i == 0)
                    first = num;
                if(i == n-1)
                    last = num;
            }

            (first == last) ? printf("YES\n") : printf("NO\n");

        }
    }

    return 0;
}
