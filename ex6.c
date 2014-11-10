#include <stdio.h>

int main(int argc, char *argv[]) {
  int distance = 1337;
  float power = 2.345f;
  double super_power = 56789.4567;
  char initial = 'K';
  char first_name[] = "Matthew";
  char last_name[] = "Bunday";

  printf("I find U %d miles away.\n", distance);
  printf("U have %f levels of power.\n", power);
  printf("U have %f super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name: %s %c. %s.\n", first_name, initial, last_name);

  return 0;
}
