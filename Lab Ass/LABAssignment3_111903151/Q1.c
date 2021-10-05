
#include <stdio.h>
int main () {
    
    float largest1 = 0, largest2 = 0, temp = 0;
    int i = 0;
    int array[5] = {2, 5, 1, 4, 3};
 
    printf ("The array elements are : \n");
    for (i = 0; i < 5; i++)
        printf ("%d\t", array[i]);
    
    printf ("\n");
 
    largest1 = array[0];
    largest2 = array[1];
 
    if (largest1 < largest2) {
        
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
 
    for (int i = 2; i < 5; i++) {
        
        if (array[i] > largest1) {
            
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2 && array[i] != largest1)
            largest2 = array[i];
        
    }
    
    float avg = (largest1 + largest2)/2;
    printf ("The FIRST LARGEST = %f\n", largest1);
    printf ("THE SECOND LARGEST = %f\n", largest2);
    printf ("THE AVERAGE OF THE TWO LARGEST NUMBERS = %f\n", avg);
 
    return 0;
}
