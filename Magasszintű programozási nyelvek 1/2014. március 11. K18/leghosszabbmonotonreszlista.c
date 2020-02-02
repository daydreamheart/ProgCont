#include <stdio.h>
#include <stdlib.h>

// @author Magyar Melinda Barbara

int main () {
	int first, number, maxmonoton = 0, monoton = 1;

	scanf("%d", &first);

	while(scanf("%d", &number) != EOF) {
		if(first <= number) {
		   first = number;
		   monoton++;
        }

		if(number < first) {
	  	   monoton = 1;
		   first = number;
        }

		if(maxmonoton < monoton)
            maxmonoton = monoton;
	}

	printf("%d\n", maxmonoton);
	return 0;
}
