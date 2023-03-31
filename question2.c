#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i, j, len;

  printf("Enter a string: ");
  scanf("%s", str);

  len = strlen(str);

  for (i = 0; i < len; i++) {
    for (j = i + 1; j < len; j++) {
      if (str[i] > str[j]) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }

  printf("Letters in ascending order: %s", str);

  return 0;
}
