#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// @author Magyar Melinda Barbara

int main () {

    char string[102];
    int length = 0;

    while(1) {

        gets(string);
        length = strlen(string);

        if(string[length - 1] == '!' && string[length - 2] == '!' && string[length - 3] == '!') {
            printf("%s\n", string);
            break;
        }
        if(string[length - 1] == '?' || string[length - 1] == '.' || string[length - 1] == '!')
            printf("%s\n", string);
    }
    return 0;
}
