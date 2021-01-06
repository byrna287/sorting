#include <stdio.h>
#include <stdlib.h>

#include "small_func.h"


// prints an array followed by a new line
void print_nums(int numbers[], int len) {

   int i;
   for (i = 0; i < len; ++i) {
      printf("%d ", numbers[i]);
   }
   printf("\n");
}

// swaps two values
void swap(int *num1, int *num2) {

   int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}

// returns the largest number in an array
int max(int nums[], int len) {

   int i, largest = 0;
   for (i = 1; i < len; ++i) {
      if (nums[i] > nums[largest]) {
         largest = i;
      }
   }
   return nums[largest];
}
