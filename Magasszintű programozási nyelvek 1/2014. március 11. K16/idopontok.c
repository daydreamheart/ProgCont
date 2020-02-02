#include <stdio.h>

// @author Magyar Melinda Barbara

int main() {

    int hour1, hour2, minute1, minute2;

    while(scanf("%d %d %d %d", &hour1, &minute1, &hour2, &minute2)) {
        if(hour1 == -1)
            break;

        if((minute1 + (hour1 * 60)) < (minute2 + (hour2 * 60)))
            printf("<\n");
        else if((minute1 + (hour1 * 60)) > (minute2 + (hour2 * 60)))
            printf(">\n");
        else
            printf("=\n");
    }
    return 0;
}
