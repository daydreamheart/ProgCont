#include <stdio.h>

// @author Magyar Melinda Barbara

int main () {
    int hours, minutes;

    while(scanf("%d.%d", &hours, &minutes) != EOF) {

        if (hours == 0) {
            hours += 12;

            if(minutes < 10)
                printf("%d.0%dam\n", hours, minutes);
            else printf("%d.%dam\n", hours, minutes);

        } else if(hours == 12) {

            if(minutes < 10)
                printf("%d.0%dpm\n", hours, minutes);
            else printf("%d.%dpm\n", hours, minutes);

        }
        else if(hours == 24) {

            if(minutes < 10)
                printf("%d.0%dam\n", hours, minutes);
            else printf("%d.%dam\n", hours, minutes);

        }
        else if(hours > 12) {
            hours -= 12;

            if(minutes < 10)
                printf("%d.0%dpm\n", hours, minutes);
            else printf("%d.%dpm\n", hours, minutes);

        } else if(hours < 12) {

            if(minutes < 10)
                printf("%d.0%dam\n", hours, minutes);
            else printf("%d.%dam\n", hours, minutes);

        }
    }
    return 0;
}
