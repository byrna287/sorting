#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "small_func.h"

// makes a max heap - parent node always bigger than child node
void make_max_heap(int nums[], int len, int i);
// calls max heap to sort the array and swaps the largest number to the
// end and calls it to sort again without that number
void heap_sort(int nums[], int len);

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

   // time how long heap sort takes
   clock_t start = clock();

   heap_sort(nums, len);

   clock_t end = clock();
   // divide by CLOCKS_PER_SEC to get the time in seconds
   double time = (double)(end - start) / CLOCKS_PER_SEC;

   //print_nums(nums, len);

   printf("%d ints - time taken: %f seconds\n", len, time);
   free(nums);
   
   return 0;
}

void make_max_heap(int nums[], int len, int i) {
   // in max heap parent node is always bigger than child node

   int largest = i, temp;
   int left = 2 * i + 1; // left child
   int right = 2 * i + 2; // right child

   // if left child is bigger than the root
   if (left < len && nums[left] > nums[largest]) {
      largest = left;
   }
   // if right child is bigger than the root
   if (right < len && nums[right] > nums[largest]) {
      largest = right;
   }
   // if the largest isn't the root swap so it is
   if (largest != i) {
      swap(&nums[i], &nums[largest]);

      // have to go again because the root changed
      make_max_heap(nums, len, largest);
   }
}

void heap_sort(int nums[], int len) {

   int i, temp;

   // make max heap
   for (i = floor(len / 2) - 1; i >= 0; --i) {
      make_max_heap(nums, len, i);
   }

   // have to swap first and last because first is largest
   for (i = len - 1; i >= 0; --i) {
      swap(&nums[i], &nums[0]);
      // makes max heap on remaining numbers (without the last number)
      make_max_heap(nums, i, 0);
   }
}
