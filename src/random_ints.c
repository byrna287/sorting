#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "small_func.h"

// compare numbers in ascending order
int compare_ints_asc(const void *a, const void *b);
// compare numbers in descending order
int compare_ints_desc(const void *a, const void *b);

int main(int argc, char *argv[]) {

   // need to include an amount and a sort type for the numbers
   if (argc < 3) {
      printf("Error! Missing an amount and/or a sort type.\n");
      return 0;
   }

   // array length to be made is first command line argument
   int len = atoi(argv[1]);
   int i, *numbers = malloc(len * sizeof(int));

   // have to have a seed for srand() or rand() will print the same numbers every time
   srand(time(0));
   // make a random array of numbers of size argv[1]
   // these numbers go from 0-99999
   for (i = 0; i < len; ++i) {     
      if (i % 5 == 0)
         numbers[i] = rand() % 1000;
      else if (i % 3 == 0)
         numbers[i] = rand() % 100;
      else if (i % 7 == 0)
         numbers[i] = rand() % 100000; 
      else if (i % 2 == 0)
         numbers[i] = rand() % 10;
      else
         numbers[i] = rand() % 10000;
   }

   //argv[2] determines what order the numbers will be in
   // random
   if (strcmp(argv[2], "random") == 0) {
      print_nums(numbers, len);
   }
   
   // partially sorted
   else if (strcmp(argv[2], "partial") == 0) {
      // sorts the first half of the numbers
      qsort (numbers, len / 2, sizeof (int), compare_ints_asc);
      print_nums(numbers, len);
   }
   
   // reverse sorted
   else if (strcmp(argv[2], "reverse") == 0) {
      qsort (numbers, len, sizeof (int), compare_ints_desc);
      print_nums(numbers, len);
   }
   
   // sorted
   else if (strcmp(argv[2], "sorted") == 0) {
      qsort (numbers, len, sizeof (int), compare_ints_asc);
      print_nums(numbers, len);
   }

   free(numbers);

   return 0;

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
