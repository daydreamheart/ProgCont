#include<stdio.h>

int main()
{
    int hour, min;

    while(scanf("%d.%d", &hour, &min) != EOF)
    {
        if(hour < 12 || hour == 24)
        {
            if(hour == 0 || hour == 24)
                hour = 12;

            if(min < 10)
            {
                printf("%d.0%dam\n", hour, min);
            }
            else printf("%d.%dam\n", hour, min);
        }
        else
        {
            if(hour > 12)
                hour -= 12;

            if(min < 10)
            {
                printf("%d.0%dpm\n", hour, min);
            }
            else printf("%d.%dpm\n", hour, min);
        }

    }

    return 0;
}

