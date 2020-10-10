#include<stdio.h>
#include<limits.h>

int main()
{
    int n, num;

    while(scanf("%d", &n))
    {
        if(n == 0)
            return 0;
        else
        {
            int min = INT_MAX, max = INT_MIN;
            for(int i = 0; i < n; i++)
            {
                scanf("%d", &num);
                if(num > max)
                    max = num;
                if(num < min)
                    min = num;
            }

            printf("%d %d\n", min, max);
        }
    }

    return 0;
}
