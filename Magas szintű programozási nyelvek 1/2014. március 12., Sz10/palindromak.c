#include <stdio.h>
#include <string.h>

// @author Magyar Melinda Barbara

int main() {

    char copy[30];
    char string[30];

    int i, j = 0;

    while(gets(string)) {
        j = 0;

        for(i = strlen(string) - 1; i >= 0; i--) {
            copy[j] = string[i];
            j++;
        }

        copy[j] = '\0';

        if(strcmp(copy, string) == 0)
            break;
        else
            printf("%s %d\n", string, strlen(string));
    }
    return 0;
}
