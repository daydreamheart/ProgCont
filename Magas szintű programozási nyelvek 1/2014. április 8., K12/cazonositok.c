#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// @author Magyar Melinda Barbara

int is_c_identifier(char *string) {
    int i = 0;

    if(string[0] == '\0')
        return 0;
    if(string[0] == '\n')
        return 0;
    if(string[0] == '_')
        return 0;
    if(!islower(string[0]))
        return 0;

    for(i = 1; i < strlen(string); i ++) {
        if(string[i] != '_' && !islower(string[i]))
            return 0;

        if(string[i] == '_' && sztring[i+1] == '_')
            return 0;
    }

    if(sztring[strlen(sztring) - 1] == '_')
        return 0;

    return 1;
}

/*
int main() {
  char line[ 50 ];
  int is_c_identifier( char * );

  while ( gets( line ) != NULL )
    if ( is_c_identifier( line ) )
      puts( "YES" );
    else
      puts( "NO" );

  return EXIT_SUCCESS;
}
*/
