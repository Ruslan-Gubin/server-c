#include <stdio.h>

#define TOTAL_MARKS  13

int array(void) 
{
  int marks[] = { 1,2,3,4,0,0,0,0,0,0,0,0,0 };
  marks[2] = 4;
  marks[0] = 2 * 3;
  marks[12] = 7 -2;
  printf("marks size = %d\n", sizeof(marks));

  int marks_length = sizeof(marks) / sizeof(*marks);
  printf("marks_length = %d\n", marks_length);

  int *ptr_ar = marks;

  printf("%u, %d\n", ptr_ar, ptr_ar[3]);

  for (int i = 0; i < marks_length; ++i) 
    printf(" element = %d\n", marks[i]);

  short ar[] = { 4, 3, 2, 1, 5, 6, 7 };
  const short *ptr_ar;

  ptr_ar = ar;
  short x = ptr_ar[0];
  ptr_ar++;


  printf("x  = %d, ptr_ar = %u\n", x, ptr_ar);
  

  return 0; 
}
