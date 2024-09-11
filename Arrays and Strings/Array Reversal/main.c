#include <stdio.h>
#include <stdlib.h>

// Struct
struct list {
  int *data; // Points to the memory where the list items are stored
  int size;  // Indicates how many items fit in the allocated memory
  // int numItems; // Indicates how many items are currently in the list
};

// Reverse Array Function Declaration
void reverseArray(struct list *nums, int start, int end);

// Print Array Function Declaration
void printArray(struct list *nums);

int main() {
  struct list nums;

  // User Input - Number of Numbers
  scanf("%d", &nums.size);

  // Dynamic Memory (HEAP) Allocation
  nums.data = malloc(nums.size * sizeof(int));

  // User Input - Numbers
  for (int i = 0; i < nums.size; i++) {
    scanf("%d", &nums.data[i]);
  }

  // Reverse Array
  reverseArray(&nums, 0, nums.size - 1);

  // Print Array
  printArray(&nums);

  // Return 0
  return EXIT_SUCCESS;
}

// Reverse Array Function Definition
void reverseArray(struct list *nums, int start, int end) {
  int tmp;
  while (start < end) {
    tmp = nums->data[start];
    nums->data[start] = nums->data[end];
    nums->data[end] = tmp;
    start++;
    end--;
  }
}

// Print Array Function Definition
void printArray(struct list *nums) {
  for (int i = 0; i < nums->size; i++) {
    printf("%d ", nums->data[i]);
  }
}
