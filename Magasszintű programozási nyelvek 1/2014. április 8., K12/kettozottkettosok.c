#include <stdio.h>
#include <stdlib.h>

// @author Magyar Melinda Barbara

int main () {
    char line[200];
    int double_double_letters (char *);

    while (gets (line) != NULL)
        printf ("%d\n", double_double_letters (line));
    return EXIT_SUCCESS;
}

double_double_letters (char *sztring) {

    int i, db = 0;

    for (i = 0; i < strlen (sztring); i++) {
        if (sztring[i] == 'c' && sztring[i + 1] == 'c' && sztring[i + 2] == 's')
            db++;
        else if (sztring[i] == 'd' && sztring[i + 1] == 'd' && sztring[i + 2] == 'z')
            db++;
        else if (sztring[i] == 'g' && sztring[i + 1] == 'g' && sztring[i + 2] == 'y')
            db++;
        else if (sztring[i] == 'l' && sztring[i + 1] == 'l' && sztring[i + 2] == 'y')
            db++;
        else if (sztring[i] == 'n' && sztring[i + 1] == 'n' && sztring[i + 2] == 'y')
            db++;
        else if (sztring[i] == 's' && sztring[i + 1] == 's' && sztring[i + 2] == 'z')
            db++;
        else if (sztring[i] == 't' && sztring[i + 1] == 't' && sztring[i + 2] == 'y')
            db++;
        else if (sztring[i] == 'z' && sztring[i + 1] == 'z' && sztring[i + 2] == 's')
            db++;
    }

    return db;
}
