
#include<stdio.h>

#define size 500

int main() {

  int A[size] = {};
  int Elem = 0, index, k;
  
  printf("Enter elements of an array. Enter -1 after your last element\n");
  for(int i = 0; i < size && A[i-1] != -1; i++) {
    scanf("%d", &A[i]);
  }

  for(int i = 0; i < size; i++) {
    if(A[i] == -1)
      break;
    Elem++;
  }

  printf("Initial Array\n");
  for(int i = 0; i < Elem; i++) 
    printf("%d ", A[i]);
  printf("\n\n");

  printf("Enter an operation:\n1. Delete first index\n2. Delete last index\n3. Delete at given index\n");
  printf("Enter an option: ");
  scanf("%d", &k);

  switch(k) {
    case 1:
      index = 0;
      break;
    case 2:
      index = Elem-1;
      break;
    case 3:
      printf("Enter index of element to be deleted: ");
      scanf("%d", &index);
      break;
    default:
      printf("Invalid choice entered");
      return 0;
  }

  for(int i = index; i < Elem; i++) {
    A[i] = A[i+1];
  }
  Elem--;

  printf("Final Array\n");
  for(int i = 0; i < Elem; i++) 
    printf("%d ", A[i]);

  printf("\n");
  return 0;
}