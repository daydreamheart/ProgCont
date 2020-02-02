#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// @author Magyar Melinda Barbara

int main () {

        char array[51];
        int i, n;
        int space = 1, number = 0;

        while(1) {
            gets(array);
            n = strlen(array);

            for(i = 0; i < n; i++)
                if(array[i] == ' ')
                    space++;

            if(strlen(t) == 0)
                break;

            printf("%d\n", space);
            space = 1;
        }
    return 0;
}
