#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "stringreverse.h"

//determine if the provided word is a palindrome
bool isPalindrome(char * str) {
  char * buff;
  buff = (char *) malloc(strlen(str));
  reverseString(str, buff);
  bool result = (strcmp(str, buff) == 0);
  return result;
}
//converts a string to lowercase
char * stringToLower(char * str) {
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    str[i] = tolower(str[i]);
  }
  return str;
}

int main() {
  char str[100];
  bool pal;
  printf("Enter string:");
  scanf("%s", str);
  stringToLower(str);
  pal = isPalindrome(str);
  if (pal) {
    printf("\"");
    printf(str);
    printf("\" is a palindrome.");
  } else {
    printf("\"");
    printf(str);
    printf("\" is not a palindrome.");
  }
  printf("\n");
}
