#include <stdio.h>
#include <string.h>

// @author Magyar Melinda Barbara

int main () {

    char string[15], i;
    int twenty = 0, thirty = 0, seventy = 0;

    while(gets(string) != NULL) {
        if(string[0] == '0' && string[1] == '6' && string[2] == '2' && string[3] == '0')
            twenty += 1;
        if(string[0] == '0' && string[1] == '6' && string[2] == '3' && string[3] == '0')
            thirty += 1;
        if(string[0] == '0' && string[1] == '6' && string[2] == '7' && string[3] == '0')
            seventy += 1;
    }

    printf("%d %d %d\n", twenty, thirty, seventy);

    return 0;
}
