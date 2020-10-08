#include <stdio.h>

int main()
{
    float a, b, c, d, num1, num2;

    while(1)
    {
        scanf("%f %f %f %f", &a, &b, &c, &d);

        if((a && b && c && d) == 0)
            return 0;
        else
        {
            num1 = a/b;
            num2 = c/d;

            if(num1 > num2)
                printf(">\n");
            else if(num1 < num2)
                printf("<\n");
            else printf("=\n");
        }
    }

    return 0;
}
