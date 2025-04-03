#include <stdio.h>

int indicator(void) 
{
  //указатели
  char d = 1;
  /*char *gpt; // обьявили указатель с типом char 1 bit*/
  /*gpt = &d; //указатель на ячейку памяти переменной d*/
  char *gpt = &d;
  /**gpt = 20;  //перезаписали значение*/
  char c = *gpt; //считываем значение с указателя через *

  printf("gpt = %p, *gpt =  %d, d =  %d\n", gpt, *gpt, d); //%p наименование ячейки 0x7ffe29bb8456
  *gpt = 120;
  printf("gpt = %p, *gpt =  %d, d =  %d\n", gpt, *gpt, d); 
  int g = 10;
  int *ptr = &g;

   printf(" ptr = %u\n", *ptr); 

  /*int g = 4;*/
  /*int *ptr = &g;*/

  /*printf(" ptr = %u\n", ptr); */
  /*ptr++;*/
  /*printf(" ptr = %u\n", ptr); // %u номерация ячейки памяти */
  
  /*short ar[10];*/
  /*short *ptr = ar;*/
  /*short *p = &ar[3];*/
  /*short *last_el = &ar[10]; */
  /**/
  /*printf("ptr = %u, p = %u, last_el = %u\n", ptr, p, last_el);*/
  /**/
  /**/
  /*int res = p - ptr;*/
  /*printf(" res = %d\n", res);*/


  return 0;
}
