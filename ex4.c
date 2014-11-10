#include <stdio.h>

/* Program has bugs on purpose for testing Valgrind.*/

int main() {
  int age = 10;
  int height;

  printf("I am %d years old.\n");
  printf("I am %d inches tall.\n", height);

  return 0;
}
