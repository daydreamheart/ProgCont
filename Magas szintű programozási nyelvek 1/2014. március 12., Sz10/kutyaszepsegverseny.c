#include <stdio.h>

// @author Magyar Melinda Barbara

int main() {

    int heads, legs;
    int dog = 0;
    int human = 0;

    while(scanf("%d %d", &heads, &legs) != EOF) {
        dog = (legs/2) - heads;
        human = heads - dog;

        printf("%d %d\n", human, dog);
    }
    return 0;
}
