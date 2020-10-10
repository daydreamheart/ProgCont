#include<stdio.h>
#include<string.h>

int main()
{
    char str1[32], str2[32];
    int count = 1;

    gets(str1);

    while(gets(str2))
    {
        count++;
        if(strcmp(str1, str2) == 0)
        {
            printf("%d\n", count);
            return 0;
        }
    }

    return 0;
}
