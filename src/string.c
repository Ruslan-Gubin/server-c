#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_lesson(void) {
  char str[] = {'B', 'a', 'l', 'a', 'k', 'i', 'r', 'e', 'v', '\0'};
  char s[] = "Ruslan Gubin";
  char buffer[512] = "Hello, World";

  char b[] = "Hel"
             "lo"
             ", World";
  char sp[] = "Hello, \
  World";
  const char array[12] = {1, 2, 3};

  /*puts(str);  */
  /*puts(s);  */
  /*puts(buffer);  */
  /*puts(b);  */
  /*puts(sp);  */

  /*printf("test = %d", 1223);*/
  /*char bf[10];*/
  /*fgets(bf, sizeof(bf), stdin); // получаем ввод строки с указанной длиной*/
  /*puts(bf);*/

  /*int max_len = sizeof(bf), i = 0;*/
  /*char *ptr = bf, ch;*/
  /*while ((ch = getchar()) != '\n' && ch != EOF && i < max_len - 1)*/
  /*  ptr[i++] = ch;*/
  /*ptr[i] = '\0';*/
  /*puts(bf);*/

  // копирование строк
  char source[] = "Source string";
  size_t source_len = strlen(source);
  /*printf("source_len = %zu\n", source_len);*/
  char destination[source_len];

  int max_len_source = sizeof(source) - 1;
  strncpy(destination, source, max_len_source);
  destination[max_len_source] = '\0';

  /*puts(destination);*/

  // обьединение строк
  char str_cat[100] = "Ruslan";
  char str_target[15] = " Gubin";

  strncat(str_cat, str_target, 5);
  puts(str_cat);

  // сравнение строк
  char str_cmp_1[] = "Ruslan";
  char str_cmp_2[] = "Ruslan";

  int check_cmp_string =
      strcmp(str_cmp_1, str_cmp_2); // если 0 тогда строки равны

  int check_n_cpm_string =
      strncmp(str_cmp_1, str_cmp_2, 2); // сравниваем по первым 2 символам

  printf("check string = %d, check n cmp string = %d\n", check_cmp_string,
         check_cmp_string);

  // поиск символа
  const char find_symbol_srting[] = "Ruslan";
  char current_symbol = 'a';
  char *ptr = strrchr(find_symbol_srting, current_symbol);

  /*printf("str = %p\n ptr = %p\n", find_symbol_srting,*/
  /*ptr); // находим адресс памяти*/

  /*if (ptr != NULL)*/
  /*printf("*ptr = %c\n", *ptr); // находим символ*/

  // поиск строки
  const char find_string_srting[] = "Ruslan";
  const char current_string[] = "lan";
  char *ptr_string = strstr(find_symbol_srting, current_string);

  printf("str_sting = %s\n ptr_string = %s\n", find_string_srting,
         ptr_string); // находим адресс памяти

  if (ptr != NULL)
    printf("ptr_string = %s\n", ptr_string); // находим символ

  // проверяет есть ли в строке символы
  char *check_has_symbol = strpbrk(find_string_srting, "@!#$&?");

  // преобразование строки  из числа
  int num_i = -123;
  char str_num_i[10];
  sprintf(str_num_i, "%d", num_i);

  puts(str_num_i);

  // преобразование числа из строки
  int num_int = atoi("123");
  long num_long = atol("234234234");
  long long num_ll = atoll("123124124124124");
  double num_double = atof("123412.2314");

  printf("num_int = %d num_long = %ld num_ll = %lld num_double = %f\n", num_int,
         num_long, num_ll, num_double);

  return 0;
}
