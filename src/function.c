#include <math.h>
#include <stdio.h>

void print_hi(void) { puts("Hello I'm Ruslan"); };

double sq4_x(double x) { return (x < 0) ? NAN : pow(x, 0.25); }

int get_per(int witch, int height) { return 2 * (witch + height); }

double per_sq(double w, double h) {
  if (w < 0 || h < 0) {
    return 0;
  }
  return 2 * (w + h);
}

int function(void) {

  int w = 2, h = 5;
  int per_1 = get_per(w, h);
  /*print_hi();*/
  /*printf("per 1 = %d\n", per_1);*/

  printf("%f\n", sq4_x(16));
  return 0;
}

int abs_int(int x) { return (x < 0) ? -x : x; }

int sq_to_int(double x) { return (int)(x * x); }

void swap_2(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
