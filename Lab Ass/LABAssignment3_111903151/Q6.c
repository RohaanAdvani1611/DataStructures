

#include <stdio.h>
#include <conio.h>
int main() {
    
	int a[3][3], i, j, sum = 0;
	
	printf("\nENTER VALUES FOR 3X3 MATRIX :\n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
			
    for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if (i == j)
			    sum += a[i][j]; 
	
	printf("Sum of Diagnol elements are:%d", sum);
	return 0;
}