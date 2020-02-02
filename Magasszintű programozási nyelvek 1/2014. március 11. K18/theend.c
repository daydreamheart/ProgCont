#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// @author Magyar Melinda Barbara

int main () {

    char array[21];
    int i = 0,
    int space = 0;

    while(1) {
        gets(array);

        for(i = 0; i < strlen(array); i++)
            if(array[i] == ' ')
                space++;

        if(strcmp(array, "THE END") == 0)
            break;
        else if(space == 0 && strlen(array) >= 10)
            puts(array);

        space = 0;
    }
    return 0;
}
