#include <stdio.h>
#include <stdlib.h>

void selection_sort(int nums[], int len);

int main(int argc, char *argv[]) {

   // length of array is first command line argument
   int len = atoi(argv[1]);
   int *nums = malloc(len * sizeof(int));
   int i;

   // reading in the numbers and adding them to array
   for (i = 0; i < len; ++i) {
      scanf("%d", &nums[i]);
   }

   selection_sort(nums, len);
   
   for (i = 0; i < len; ++i) {
      printf("%d\n", nums[i]); // might get rid of print once actually testing
   }
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
      // swap i and smallest number
      temp = nums[smallest_ind];
      nums[smallest_ind] = nums[i];
      nums[i] = temp;
   }
}