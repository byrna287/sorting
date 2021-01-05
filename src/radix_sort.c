#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// WASN'T WORKING WITH PIPING DATA IN (THE NUMBERS WERE TOO BIG?? AND DOESN'T SORT NEGATIVE NUMBERS)
#include "small_func.h"

void counting_sort(int nums[], int len, int dig);
void radix_sort(int nums[], int len);

int main(int argc, char *argv[]) {

   // length of array is first command line argument
   int len = atoi(argv[1]);
   int *nums = malloc(len * sizeof(int));
   int i;

   // reading in the numbers and adding them to array
   for (i = 0; i < len; ++i) {
      scanf("%d", &nums[i]);
   }

   // time how long radix sort takes
   clock_t start = clock();

   radix_sort(nums, len);

   clock_t end = clock();
   // divide by CLOCKS_PER_SEC to convert to seconds
   double time = (double)(end - start) / CLOCKS_PER_SEC;

   //print_nums(nums, len);

   printf("%d ints - time taken: %f seconds\n", len, time);
   free(nums);
   
   return 0;

}

void counting_sort(int nums[], int len, int dig) {

   // initialise the arrays to contain zeros
   int count[10] = { 0 };
   int *sorted = malloc(len * sizeof(int));
   int i, ind;

   for (i = 0; i < len; ++i) {
      sorted[i] = 0;
   }

   // counting occurence of each digit
   for (i = 0; i < len; ++i) {
      // /dig to get to the digit you want, floor to get rid of after decimal point
      ind = floor(nums[i] / dig);
      // %10 to get the last digit
      count[ind % 10] += 1;
   }

   // add together count[i] and count[i - 1]
   for (i = 1; i < 10; ++i) {
      count[i] += count[i - 1];
   }

   // build sorted list
   for (i = len - 1; i >= 0; --i) { // had this going up from 0 and it didn't work
      // get to the digit you want
      ind = floor(nums[i] / dig);
      // -1 because index starts at 0
      sorted[count[ind % 10] - 1] = nums[i];
      count[ind % 10] -= 1;
   }

   // copy sorted list to nums
   for (i = 0; i < len; ++i) {
      nums[i] = sorted[i];
   }
   free(sorted);

}

void radix_sort(int nums[], int len) {

   int largest = max(nums, len);
   int dig;

   // start with 1 for first digit (1s) then *10 for next digit (10s), then *10 (100s)...
   dig = 1;
   for (dig = 1; dig < largest; dig = dig * 10) {
      counting_sort(nums, len, dig);
   }

}
