
#include <stdio.h>
#include <conio.h>
int main() {
    int a[3][3], i, j, sumc = 0, sumr = 0;
	
	printf("\nENTER VALUES FOR 3X3 MATRIX :\n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
			
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			sumc += a[i][j];
			sumr += a[j][i];
		}
		printf("Sum of column is: %d\n", sumc);
		sumc = 0;
		printf("Sum of row is: %d\n", sumr);
		sumr = 0;
	}	    
    return 0;
}

