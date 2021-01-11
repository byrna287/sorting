#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "small_func.h"

// sorts an array by swapping the smallest number of the unsorted part with
// the current number
void selection_sort(int nums[], int len);

int main(int argc, char *argv[]) {

   // need to include length of array to be sorted
   if (argc < 2) {
      printf("Error! Missing length that is to be sorted.\n");
      return 1;
   }

   // length of array is first command line argument
   int len = atoi(argv[1]);
   int *nums = malloc(len * sizeof(int));
   int i;

   // reading in the numbers and adding them to array
   for (i = 0; i < len; ++i) {
      scanf("%d", &nums[i]);
   }

   // to time selection_sort
   clock_t start = clock();
   
   selection_sort(nums, len);
   
   clock_t end = clock();
   // CLOCKS_PER_SEC changes the time from "clocks" to seconds
   double time = (double)(end - start) / CLOCKS_PER_SEC; 

   //print_nums(nums, len);
   
   printf("%d ints - time taken: %f seconds\n", len, time);
   free(nums);
   
   return 0;
}

void selection_sort(int nums[], int len) {

   int i, j, smallest_ind, temp;

   for (i = 0; i < len; ++i) {
      // assign first number as smallest
      smallest_ind = i;

      // loop through unsorted part of array to find smallest element
      for (j = i + 1; j < len; ++j) {
         if (nums[j] < nums[smallest_ind]) {
            smallest_ind = j;
         }
      }
      // swap i (first of unsorted) and smallest number if it's not already in
      // the right place
      if (i != smallest_ind) {
         swap(&nums[i], &nums[smallest_ind]);
      }
   }
}