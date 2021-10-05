
#include <stdio.h>
#include <conio.h>
int main() {
    int a[3][3], i, j;
	
	printf("\nENTER VALUES FOR 3X3 MATRIX :\n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	
	printf("\nUPPER TRIANGULAR MATRIX =\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
		    if (i >= j)
			    printf("%d", a[i][j]);
			else
			    printf(" ");
		}
        printf("\n");
	}
	
	printf("\nLOWER TRIANGULAR MATRIX =\n");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
		    if (i <= j)
			    printf("%d", a[i][j]);
			else
			    printf(" ");
		}
        printf("\n");
	}
    return 0;
}

