#include <stdio.h>
#include <string.h>

// @author Magyar Melinda Barbara

int main() {

    int i;
    char string[20];

    while(gets(string)) {
        if(strcmp(string, "THE END") == 0)
            break;

        for(i = strlen(string) - 1; i >= 0; i--)
            printf("%c", string[i]);

        printf("\n");
    }

    return 0;
}
