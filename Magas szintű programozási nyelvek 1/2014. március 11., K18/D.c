#include<stdio.h>
#include<string.h>

int main()
{

    char str[22];

    while(gets(str))
    {
        if(strcmp(str, "THE END") == 0)
            return 0;
        else
        {
            int space = 0;

            for(int i = 0; i < strlen(str); i++)
                if(str[i] == ' ')
                    space++;

            if(space == 0 && strlen(str) >= 10)
                puts(str);

        }

    }

    return 0;
}
