#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// @author Magyar Melinda Barbara

int main ()
{
    char string[i];
    int i, length = 0;

    while(gets(string) != NULL) {
        length = strlen(string);

        for(i = 0; i < length; i++) {
            if(string[i] == 'A')
                printf("2");
            if(string[i] == 'B')
                printf("22");
            if(string[i] == 'C')
                printf("222");
            if(string[i] == 'D')
                printf("3");
            if(string[i] == 'E')
                printf("33");
            if(string[i] == 'F')
                printf("333");
            if(string[i] == 'G')
                printf("4");
            if(string[i] == 'H')
                printf("44");
            if(string[i] == 'I')
                printf("444");
            if(string[i] == 'J')
                printf("5");
            if(string[i] == 'K')
                printf("55");
            if(string[i] == 'L')
                printf("555");
            if(string[i] == 'M')
                printf("6");
            if(string[i] == 'N')
                printf("66");
            if(string[i] == 'O')
                printf("666");
            if(string[i] == 'P')
                printf("7");
            if(string[i] == 'Q')
                printf("77");
            if(string[i] == 'R')
                printf("777");
            if(string[i] == 'S')
                printf("7777");
            if(string[i] == 'T')
                printf("8");
            if(string[i] == 'U')
                printf("88");
            if(string[i] == 'V')
                printf("888");
            if(string[i] == 'W')
                printf("9");
            if(string[i] == 'X')
                printf("99");
            if(string[i] == 'Y')
                printf("999");
            if(string[i] == 'Z')
                printf("9999");
        }
        printf("\n");
    }
    return 0;
}
