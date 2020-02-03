#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// @author Magyar Melinda Barbara

typedef struct {

    char sorszam[40];
    char eloado[40];
    char zeneszam[110];
    char perc[5];
    char masodperc[5];

} cd;

cmp(const void *a, const void *b) {

    cd *pa = (cd *)a;
    cd *pb = (cd *)b;

    int f1 = atoi(pa-> perc);
    int f2 = atoi(pb-> perc);

    if(f1 > f2)
        return -1;
    if(f1 < f2)
        return 1;

    int d1 = atoi(pa-> masodperc);
    int d2 = atoi(pb-> masodperc);

    if(f1 == f2) {
        if(d1 > d2)
            return -1;
        if(d1 < d2)
            return 1;
        if(d1 == d2)
            return strcmp(pa -> sorszam, pb -> sorszam);
    }
}

int main() {

    int db = 0;
    cd tomb[500];
    char line[500];

    while(gets(line) != NULL) {
        char *p = strtok(line, ";");
        strcpy(tomb[db].sorszam, p); // sorszám

        p = strtok(NULL, ";");
        strcpy(tomb[db].eloado, p); // elõadó

        p = strtok(NULL, ";");
        strcpy(tomb[db].zeneszam, p); // zeneszám

        p = strtok(NULL, ":");
        strcpy(tomb[db].perc, p); // perc

        p = strtok(NULL, ";");
        strcpy(tomb[db].masodperc, p); // másodperc

        db++;
    }
        qsort(tomb, db, sizeof(cd), cmp);

        int i = 0;
        for(i = 0; i < 1; i++)
            printf("%s\n", tomb[i].eloado);

    return 0;
}
