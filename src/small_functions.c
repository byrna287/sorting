#include <stdio.h>
#include <stdlib.h>

#include "small_func.h"

void print_nums(int numbers[], int len) {

   int i;
   for (i = 0; i < len; ++i) {
      printf("%d ", numbers[i]);
   }
   printf("\n");
}

void swap(int *num1, int *num2) {

   int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}

int max(int nums[], int len) {

   int i, largest = 0;
   for (i = 1; i < len; ++i) {
      if (nums[i] > nums[largest]) {
         largest = i;
      }
   }
   return nums[largest];
}
