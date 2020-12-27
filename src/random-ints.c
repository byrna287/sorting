#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int compare_ints_asc(const void *a, const void *b);
int compare_ints_desc(const void *a, const void *b);
void print_nums(int numbers[], int len);

int main(int argc, char *argv[]) {

   int len = atoi(argv[1]);
   int i, numbers[len];

   // make a random array of numbers of size argv[1]
   // have to have a seed for srand() or rand() will print the same numbers every time
   srand(time(0));
   for (i = 0; i < len; ++i) {
      numbers[i] = rand();
   }

   // random
   if (strcmp(argv[2], "random") == 0) {
      print_nums(numbers, len);
   }
   
   // partially sorted
   if (strcmp(argv[2], "partial") == 0) {
      qsort (numbers, len / 2, sizeof (int), compare_ints_asc);
      print_nums(numbers, len);
   }
   
   // reverse sorted
   if (strcmp(argv[2], "reverse") == 0) {
      qsort (numbers, len, sizeof (int), compare_ints_desc);
      print_nums(numbers, len);
   }
   
   // sorted
   if (strcmp(argv[2], "sorted") == 0) {
      qsort (numbers, len, sizeof (int), compare_ints_asc);
      print_nums(numbers, len);
   }

}

int compare_ints_asc(const void *a, const void *b) {

   const int *da = (const int *) a;
   const int *db = (const int *) b;

   return (*da > *db) - (*da < *db);

}
int compare_ints_desc(const void *a, const void *b) {

   const int *da = (const int *) a;
   const int *db = (const int *) b;

   return (*da < *db) - (*da > *db);

}
void print_nums(int numbers[], int len) {

   int i;
   for (i = 0; i < len; ++i) {
      printf("%d ", numbers[i]);
   }
   printf("\n");

}

/* going to have if statements for argv[2] for random, partially sorted,
reverse sorted, sorted and can pipe them to different files for testing
pipe the datasets to files after
when adding the results to file have first in line be ints=(intcount) */