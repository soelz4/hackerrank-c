#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Declaration
char *readline();

// Visit https://stackoverflow.com/questions/1088622/how-do-i-create-an-array-of-strings-in-c
const char *strings[9] = {"one", "two",   "three", "four", "five",
                          "six", "seven", "eight", "nine"};
// const char strings[9][5] = {"one", "two",   "three", "four", "five",
// "six", "seven", "eight", "nine"};

int main() {
  char *n_endptr;
  char *n_str = readline();
  int n = strtol(n_str, &n_endptr, 10);

  if (n_endptr == n_str || *n_endptr != '\0') {
    exit(EXIT_FAILURE);
  }

  // Write Your Code Here
  if (n <= 9) {
    printf("%s\n", strings[n - 1]);
  } else {
    printf("%s\n", "Greater than 9");
  }
  return EXIT_SUCCESS;
}

// Function Definition
char *readline() {
  size_t alloc_length = 1024;
  size_t data_length = 0;
  char *data = malloc(alloc_length);

  while (true) {
    char *cursor = data + data_length;
    char *line = fgets(cursor, alloc_length - data_length, stdin);

    if (!line) {
      break;
    }

    data_length += strlen(cursor);

    if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
      break;
    }

    size_t new_length = alloc_length << 1;
    data = realloc(data, new_length);

    if (!data) {
      break;
    }

    alloc_length = new_length;
  }

  if (data[data_length - 1] == '\n') {
    data[data_length - 1] = '\0';
  }

  data = realloc(data, data_length);

  return data;
}
