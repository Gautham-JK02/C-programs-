#include <stdio.h>

int main() {
  int n, i;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Squares of the elements:\n");
  for (i = 0; i < n; i++) {
    arr[i] = arr[i] * arr[i];
    printf("%d ", arr[i]);
  }

  printf("\nReversed array:\n");
  for (i = n - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }

  return 0;
}
