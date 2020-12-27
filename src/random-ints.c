#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int compare_ints_asc(const void *a, const void *b);
void print_nums(int numbers[], int len);

int main(int argc, char *argv[]) {

   int len = atoi(argv[1]);
   int i, numbers[len];

   srand(time(0));
   for (i = 0; i < len; ++i) {
      numbers[i] = rand();
   }

   // random
   if (strcmp(argv[2], "random") == 0) {
      print_nums(numbers, len);
   }

   // sorted
   if (strcmp(argv[2], "sorted") == 0) {
      qsort (numbers, len, sizeof (int), compare_ints_asc);
      print_nums(numbers, len);
   }

   // reverse
}

int compare_ints_asc(const void *a, const void *b) {

   const int *da = (const int *) a;
   const int *db = (const int *) b;

   return (*da > *db) - (*da < *db);

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