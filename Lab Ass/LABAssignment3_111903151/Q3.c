

#include<stdio.h>

#define size 50

int main() {

  int arr[size] = {};
  printf("Enter elements in array and enter -1 when done with all elements: ");
  for(int i = 0; arr[i-1] != -1; i++)
    scanf("%d", &arr[i]);
  int Elem = 0, num, j;
  printf("Enter number to add to array: ");
  scanf("%d", &num);
  printf("Enter index at which number should be added: ");
  scanf("%d", &j);

  int index = 0;
  while(arr[index] != -1) {
    Elem++;
    index++;
  }

  for(int i = Elem; i >= j ; i--) {
    arr[i + 1] = arr[i];
  }

  arr[j] = num;

  for(int i = 0; i < Elem+1; i++)
    printf("%d ", arr[i]);

  printf("\n");
  return 0;
}