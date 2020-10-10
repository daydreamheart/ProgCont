#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[102];
    int length;

    while(1) {

        gets(str);
        length = strlen(str);

        if(str[length-1] == '!' && str[length-2] == '!' && str[length-3] == '!') {
            printf("%s\n", str);
            return 0;
        }

        if(str[length-1] == '.' || str[length-1] == '!' || str[length-1] == '?')
            printf("%s\n", str);
    }

    return 0;
}
