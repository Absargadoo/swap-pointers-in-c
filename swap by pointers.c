#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a, b;

  printf("Enter the two numbers to be swapped: ");
  scanf("%d %d", &a, &b);

  printf("Before swapping:\n");
  printf("x = %d\ny = %d\n", a, b);

  swap(&a,&b);

  printf("After swapping:\n");
  printf("x = %d\ny = %d\n", a, b);

  return 0;
}