#include<stdio.h>

int main()
{
    int n, num, line = 0;

    while(scanf("%d", &n))
    {
        if(n == 0)
            return 0;

        line++;
        int plus = 0, minus = 0;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &num);

            if(num > 0)
                plus++;
            else if(num < 0)
                minus++;
        }

        if(plus > minus)
            printf("%d\n", line);
    }

    return 0;
}
