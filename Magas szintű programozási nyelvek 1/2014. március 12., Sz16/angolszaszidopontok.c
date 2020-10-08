#include <stdio.h>

// @author Magyar Melinda Barbara

int main() {

    int hour, minute;
    char daynight[5];

    while(scanf("%d.%d%s", &hour, &minute, &daynight) != EOF) {

        if(strcmp(daynight, "am") == 0) {
            if(hour == 12) {
                hour -= 12;

                if(minute > 10)
                    printf("%d.%d\n", hour, minute);
                else
                    printf("%d.%.2d\n", hour, minute);
            } else {
                if(minute > 10)
                    printf("%d.%d\n", hour, minute);
                else
                    printf("%d.%.2d\n", hour, minute);
            }
        } else {
            if(hour == 12) {
                if(minute > 10)
                    printf("%d.%d\n", hour, minute);
                else
                    printf("%d.%.2d\n", hour, minute);
            } else {
                hour += 12;

                if(minute > 10)
                    printf("%d.%d\n", hour, minute);
                else
                    printf("%d.%.2d\n", hour, minute);
            }
        }
    }
    return 0;
}
