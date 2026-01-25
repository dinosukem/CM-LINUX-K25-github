#include <stdio.h>
#include "strutils.h"

char *str_reverse(char *str) {
  if (str == NULL) {
    return NULL;
  }

  char *start = str;
  char *end = str;

  // Move 'end' to the last character of the string
  while (*end != '\0') {
    end++;
  }
  end--; // Set 'end' to the last valid character

  // Swap characters from start and end until they meet in the middle
  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }

  return str;
}


char* str_trim(char *str) {
  if (str == NULL) {
    return NULL;
  }
  if (*str == '\0') {
    return str; // Empty string
  }

  char *start = str;
  char *end = str;

  // Move 'end' to the last character of the string
  while (*end != '\0') {
    end++;
  }
  end--; // Set 'end' to the last valid character

  // Trim leading spaces
  while (*start == ' ' && start <= end) {
    start++;
  }

  // Trim trailing spaces
  while (*end == ' ' && end >= start) {
    end--;
  }

  // Set new null terminator
  *(end + 1) = '\0';

  // Shift trimmed string to the beginning
  char *trimmed_str = str;
  while (start <= end) {
    *trimmed_str++ = *start++;
  }
  *trimmed_str = '\0';

  return str;
}

int str_to_int(char *str) {
  if (str == NULL) {
    return 0; // Handle NULL input
  }

  int result = 0;
  int sign = 1;

  // Skip leading whitespace
  while (*str == ' ') {
    str++;
  }

  // Check for optional sign
  if (*str == '-') {
    sign = -1;
    str++;
  } else if (*str == '+') {
    str++;
  }

  // Convert characters to integer
  while (*str >= '0' && *str <= '9') {
    result = result * 10 + (*str - '0');
    str++;
  }

  return sign * result;
}
