

#include <stdio.h>
#include <conio.h>
int main() {
    
	int a[2][2], b[2][2], sum[2][2], diff[2][2], prod[2][2], i, j, n;
	
	printf("\nENTER VALUES FOR 2X2 MATRIX A:\n");
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
			scanf("%d", &a[i][j]);
			
	printf("\nENTER VALUES FOR 2X2 MATRIX B:\n");
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
			scanf("%d", &b[i][j]);
	
	printf("Choose operation :\n1. Add\n2. Subtract\n3. Multiply\n");
	scanf("%d", &n);
	
	
			
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++) {
			sum[i][j] = a[i][j] + b[i][j];
		    diff[i][j] = a[i][j] - b[i][j];
			prod[i][j] = a[i][j] * b[i][j];
		}
	
	switch(n) {
	    case 1 : 
	        printf("\nTHE VALUES OF MATRIX C ARE:\n");
	        for(i = 0; i < 2; i++) {
		        for(j = 0; j < 2; j++)
			    printf("%5d", sum[i][j]);
		    printf("\n");
	        }break;
	    case 2 : 
	        printf("\nTHE VALUES OF MATRIX C ARE:\n");
	        for(i = 0; i < 2; i++) {
		        for(j = 0; j < 2; j++)
			    printf("%5d", diff[i][j]);
		    printf("\n");
	        }break;
	    case 3 : 
	        printf("\nTHE VALUES OF MATRIX C ARE:\n");
	        for(i = 0; i < 2; i++) {
		        for(j = 0; j < 2; j++)
			    printf("%5d", prod[i][j]);
		    printf("\n");
	        }break;
	}
	
	return 0;
}
