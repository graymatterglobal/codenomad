#include <stdio.h>

int main() {
  int x = 31;
  int y = 45;
  printf("Values before swapping: x=%d, y=%d\n", x, y);

  int temp = x;
  x = y;
  y = temp;

  printf("Values after swapping: x=%d, y=%d\n", x, y);
}
