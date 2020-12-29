#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void make_max_heap(int nums[], int len, int i);
void heap_sort(int nums[], int len);

int main(int argc, char *argv[]) {

   int len = atoi(argv[1]);
   int *nums = malloc(len * sizeof(int));
   int i;

   for (i = 0; i < len; ++i) {
      scanf("%d", &nums[i]);
   }

   heap_sort(nums, len);

   for (i = 0; i < len; ++i) {
      printf("%d\n", nums[i]);
   }
   printf("\n");

   free(nums);
   return 0;
}

void make_max_heap(int nums[], int len, int i) {

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
      temp = nums[i];
      nums[i] = nums[largest];
      nums[largest] = temp;

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
      temp = nums[i];
      nums[i] = nums[0];
      nums[0] = temp;
      // makes max heap on remaining numbers (without the last number)
      make_max_heap(nums, i, 0);
   }
}
