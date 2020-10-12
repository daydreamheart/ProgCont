#include<stdio.h>
#include<limits.h>

int main()
{

    int first, num, count = 1, max = INT_MIN;

    scanf("%d", &first);

    while(scanf("%d", &num) != EOF)
    {
        if(num >= first)
        {
            first = num;
            count++;
        }
        else
        {
            if(count > max)
                max = count;

            count = 1;
            first = num;
        }
    }

    printf("%d\n", max);

    return 0;
}
