#include<stdio.h>
#include<string.h>

int main()
{

    char str[52];

    while(gets(str))
    {
        if(strlen(str) == 0)
            return 0;
        else
        {
            int space = 1;

            for(int i = 0; i < strlen(str); i++)
            {
                if(str[i] == ' ')
                    space++;
            }

            printf("%d\n", space);

        }

    }

    return 0;
}
