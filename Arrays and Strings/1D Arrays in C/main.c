#include <stdio.h>
#include <stdlib.h>

// Struct
struct list {
  int *data; // Points to the memory where the list items are stored
  int size;  // Indicates how many items fit in the allocated memory
  // int numItems; // Indicates how many items are currently in the list
};

// Sum Function Declaration
int sumFunc(struct list *nums);

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

  // Sum
  int sum = sumFunc(&nums);

  // Deallocation
  free(nums.data);
  nums.data = NULL;

  // Print Sum
  printf("%d\n", sum);

  // Return 0
  return EXIT_SUCCESS;
}

// Sum Function Definition
int sumFunc(struct list *nums) {
  int sum = 0;

  // Sum
  for (int i = 0; i < nums->size; i++) {
    sum = sum + nums->data[i];
  }

  // Return Sum
  return sum;
}
