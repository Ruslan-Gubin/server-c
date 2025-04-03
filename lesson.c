
#include <stddef.h>
/*#include <stdio.h>*/
#include <stdio.h>
/*#include <stdlib.h>*/
/*#include <string.h>*/
/*#include <stdbool.h>*/
#include "src/printf.h"
/*#include <math.h>*/
/*#include <stdlib.h>*/
/*#include <time.h>*/
/*#include "./src/func.h"*/
/*#include <stdlib.h>*/
/*#include <sys/socket.h>*/
#include <unistd.h>

#define SQ_PR(A, B) A *B
#define FIVE 5

/*double per_sq(double w, double h);*/

enum { name_length = 50, b_length = 20 };

struct tag_fio {
  char name[name_length];
  char last[name_length];
};

struct tag_point {
  int x;
  int y;
  int z;
};

struct tag_person {
  struct tag_fio fio;
  char sex;
  unsigned short old;
  char b_date[b_length];
};

int main(void) {
  struct tag_point pt = {10, 20, 30};

  struct tag_person person = {{"Ruslan", "Sergeevich"}, 'M', 98, "32.06.1988"};

  printf("pt x = %d, pt y = %d, pt z = %d\n", pt.x, pt.y, person.old);
  sleep(5);

  printf("pt x = %d, pt y = %d, pt z = %d\n", pt.x, pt.y, person.old);

  /*char *ar = malloc(20);*/
  /*int *a = malloc(sizeof(int));*/
  /**a = 20;*/
  /**/
  /*printf("a = %p\n", a);*/
  /**/
  /*free(ar);*/
  /*free(a);*/
  /*printf("a 2 = %p\n", a);*/

  /*printf("per = %d\n", abs_int(-5));*/
  /*printf("per = %d\n", sq_to_int(-5.5));*/
  /*printf("per = %.2f\n", per_sq(2.5, 3.5));*/
  /**/
  /*int x = 5, y = 20;*/
  /*swap_2(&x, &y);*/
  /*printf("x = %d, y = %d\n", x, y);*/

  /*int sockfd = socket(AF_INET, SOCK_STREAM, 0);*/
  /*if (sockfd == -1) {*/
  /*  perror("webserver (socket)");*/
  /*}*/
  /*printf("socket cerated successfully\n");*/
  // function

  /*int time_start = time(NULL);*/
  /*int time_end = time(NULL);*/

  /*printf("total time: %d\n", time_end - time_start);*/
  /*printf("total srart: %d\n", time_start);*/
  /*printf("total end: %d\n", time_end);*/

  /*int res = SQ_PR(2,3);*/
  /*int five = FIVE;*/
  /*printf("res = %d\n", res);*/
  /*double a, b, c;*/
  /*double D, x1, x2;*/
  /**/
  /*if (scanf("%lf, %lf, %lf", &a, &b, &c) != 3) {*/
  /*printf("Error input\n");*/
  /*return 0;*/
  /*}*/
  /**/
  /*D = b*b - 4*a*c;*/
  /**/
  /*if (D < 0) {*/
  /*printf("D = %.2f < 0\n", D);*/
  /*return 0;*/
  /*}*/
  /**/
  /*D = sqrt(D);*/
  /**/
  /*x1 = -(b + D) / (2.0 * a);*/
  /*x2 = -(b - D) / (2.0 * a);*/
  /**/
  /*printf("x1 = %.2f, x2 = %.2f\n", x1, x2 );*/

  /*time_t time_start = time(NULL);*/
  /*srand(time(NULL));*/
  /*time_t t = time(NULL);*/
  /**/
  /*printf("timestamp - %d\n", t);*/
  /**/
  /*int range = 10;*/
  /**/
  /*int r_1 = rand() % range;*/
  /*int r_2 = rand();*/
  /**/
  /*printf("%d, %d, %d, %d, %d \n", r_1, r_2, rand(), rand(), rand());*/
  /**/
  /*time_t time_end = time(NULL);*/
  /**/
  /*int time_result = time_end - time_start;*/
  /*printf("time result: %d\n", time_result);*/

  /*bool is_view = false;*/
  /*int count = 1;*/
  /*double  var_d = 10.0;*/
  /*short p = 2;*/
  /**/
  /*int x;*/
  /*scanf("%d", &x);*/
  /**/
  /*if (x > 10 && x < 20) {*/
  /*  x = 1;*/
  /*} else if (x > 20 && x < 30) {*/
  /*  x = 2;*/
  /*} else {*/
  /*  x = 3;*/
  /*}*/
  /*count -= 3-5;*/
  /*var_d /= 3.0 + p;*/

  /*printf("x = %d\n", x);*/

  return 0;
}
