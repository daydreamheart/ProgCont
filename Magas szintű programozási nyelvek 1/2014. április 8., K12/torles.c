#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// @author Magyar Melinda Barbara

char *delete(char *string, char *string2) {
    char *uj = calloc(strlen(string), sizeof(char));
    char *p = strstr(string, string2);

    if(strlen(string2) == 0)
        return strcpy(uj, string);

    int i, db = 0;

    for(i = 0; i < strlen(string); i++) {
        if(&string[i] != p)
            uj[db++] = string[i];
        else
            i += strlen(string2) - 1;
            // azért kell -1, hogy a \0-ás zárókaraktert ne számolja bele, mert anélkül
            // eggyel több betût ugrik át a string mint kellene
    }
    return uj;
}

/*
int main()
{
    char s1[ 30 ], s2[ 30 ];
    char *delete( char *, char * );
    while ( scanf( "%s %s", s1, s2 ) != EOF ) {
        char *p = delete( s1, s2 );
        puts( p );
        free( p );
    }
    return EXIT_SUCCESS;
}
*/
