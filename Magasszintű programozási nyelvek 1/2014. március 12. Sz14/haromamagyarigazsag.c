#include <stdio.h>

// @author Magyar Melinda Barbara

int main () {

    int x = 0;
    int count = 0;
    char string[30];

    while(gets(string)) {
        if(strcmp(string, "justice") == 0)
            count++;

        x = strlen(string);

        if(x > 10)
            printf(">\n");
        else if(x < 10)
            printf("<\n");
        else if(x == 10)
            printf("=\n");

        if(count == 3)
            break;
    }
    return 0;
}
