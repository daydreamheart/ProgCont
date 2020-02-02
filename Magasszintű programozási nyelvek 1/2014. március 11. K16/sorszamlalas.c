#include <stdio.h>
#include <string.h>

// @author Magyar Melinda Barbara

int main() {

    int count = 1;
    char string[30];
    char first[30];

    gets(first);

    while(gets(string)) {
        count++;

        if(strcmp(first, string) == 0) {
            printf("%d\n", count);
            break;
        }
    }
    return 0;
}
