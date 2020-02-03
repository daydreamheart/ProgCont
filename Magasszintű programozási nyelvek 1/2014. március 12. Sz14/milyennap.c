#include <stdio.h>

// @author Magyar Melinda Barbara

int main () {

    int month, day;

    while(scanf("%d.%d.", &month, &day) && (month != 0 && day != 0)) {

        if(month == 1 || month == 10) {
            if(day == 1 || day == 8 || day == 15 || day == 22 || day == 29) printf("Monday\n");
            if(day == 2 || day == 9 || day == 16 || day == 23 || day == 30) printf("Tuesday\n");
            if(day == 3 || day == 10 || day == 17 || day == 24 || day == 31) printf("Wednesday\n");
            if(day == 4 || day == 11 || day == 18 || day == 25) printf("Thursday\n");
            if(day == 5 || day == 12 || day == 19 || day == 26) printf("Friday\n");
            if(day == 6 || day == 13 || day == 20 || day == 27) printf("Saturday\n");
            if(day == 7 || day == 14 || day == 21 || day == 28) printf("Sunday\n");
        }

        if(month == 3 || month == 2 || month == 11) {
            if(day == 1 || day == 8 || day == 15 || day == 22 || day == 29) printf("Thursday\n");
            if(day == 2 || day == 9 || day == 16 || day == 23 || day == 30) printf("Friday\n");
            if(day == 3 || day == 10 || day == 17 || day == 24 || day == 31) printf("Saturday\n");
            if(day == 4 || day == 11 || day == 18 || day == 25) printf("Sunday\n");
            if(day == 5 || day == 12 || day == 19 || day == 26) printf("Monday\n");
            if(day == 6 || day == 13 || day == 20 || day == 27) printf("Tuesday\n");
            if(day == 7 || day == 14 || day == 21 || day == 28) printf("Wednesday\n");
        }

        if(month == 4 || month == 7) {
            if(day == 1 || day == 8 || day == 15 || day == 22 || day == 29) printf("Sunday\n");
            if(day == 2 || day == 9 || day == 16 || day == 23 || day == 30) printf("Monday\n");
            if(day == 3 || day == 10 || day == 17 || day == 24 || day == 31) printf("Tuesday\n");
            if(day == 4 || day == 11 || day == 18 || day == 25) printf("Wednesday\n");
            if(day == 5 || day == 12 || day == 19 || day == 26) printf("Thursday\n");
            if(day == 6 || day == 13 || day == 20 || day == 27) printf("Friday\n");
            if(day == 7 || day == 14 || day == 21 || day == 28) printf("Saturday\n");
        }

        if(month == 5) {
            if(day == 1 || day == 8 || day == 15 || day == 22 || day == 29) printf("Tuesday\n");
            if(day == 2 || day == 9 || day == 16 || day == 23 || day == 30) printf("Wednesday\n");
            if(day == 3 || day == 10 || day == 17 || day == 24 || day == 31) printf("Thursday\n");
            if(day == 4 || day == 11 || day == 18 || day == 25) printf("Friday\n");
            if(day == 5 || day == 12 || day == 19 || day == 26) printf("Saturday\n");
            if(day == 6 || day == 13 || day == 20 || day == 27) printf("Sunday\n");
            if(day == 7 || day == 14 || day == 21 || day == 28) printf("Monday\n");
        }

        if(month == 6) {
            if(day == 1 || day == 8 || day == 15 || day == 22 || day == 29) printf("Friday\n");
            if(day == 2 || day == 9 || day == 16 || day == 23 || day == 30) printf("Saturday\n");
            if(day == 3 || day == 10 || day == 17 || day == 24) printf("Sunday\n");
            if(day == 4 || day == 11 || day == 18 || day == 25) printf("Monday\n");
            if(day == 5 || day == 12 || day == 19 || day == 26) printf("Tuesday\n");
            if(day == 6 || day == 13 || day == 20 || day == 27) printf("Wednesday\n");
            if(day == 7 || day == 14 || day == 21 || day == 28) printf("Thursday\n");
        }

        if(month == 8) {
            if(day == 1 || day == 8 || day == 15 || day == 22 || day == 29) printf("Wednesday\n");
            if(day == 2 || day == 9 || day == 16 || day == 23 || day == 30) printf("Thursday\n");
            if(day == 3 || day == 10 || day == 17 || day == 24 || day == 31) printf("Friday\n");
            if(day == 4 || day == 11 || day == 18 || day == 25) printf("Saturday\n");
            if(day == 5 || day == 12 || day == 19 || day == 26) printf("Sunday\n");
            if(day == 6 || day == 13 || day == 20 || day == 27) printf("Monday\n");
            if(day == 7 || day == 14 || day == 21 || day == 28) printf("Tuesday\n");
        }

        if(month == 9 || month == 12) {
            if(day == 1 || day == 8 || day == 15 || day == 22 || day == 29) printf("Saturday\n");
            if(day == 2 || day == 9 || day == 16 || day == 23 || day == 30) printf("Sunday\n");
            if(day == 3 || day == 10 || day == 17 || day == 24 || day == 31) printf("Monday\n");
            if(day == 4 || day == 11 || day == 18 || day == 25) printf("Tuesday\n");
            if(day == 5 || day == 12 || day == 19 || day == 26) printf("Wednesday\n");
            if(day == 6 || day == 13 || day == 20 || day == 27) printf("Thursday\n");
            if(day == 7 || day == 14 || day == 21 || day == 28) printf("Friday\n");
        }
    }

    return 0;
}
