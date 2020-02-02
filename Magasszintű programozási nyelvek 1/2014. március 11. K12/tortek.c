#include <stdio.h>

// @author Magyar Melinda Barbara

int main () {

    float number1, number2, number3, number4;
    float fraction1 = 0, fraction2 = 0;

     while(1) {
        scanf("%f %f %f %f", &number1, &number2, &number3, &number4);

        if(number1 && number2 && number3 && number4 > 0) {

            fraction1 = number1 / number2;
            fraction2 = number3 / number4;

            if(fraction1 > fraction2)
                printf(">\n");
            else if(tort1 < fraction2)
                printf("<\n");
            else if(tort1 == fraction2)
                printf("=\n");
        } else
            break;
     }
    return 0;
}
