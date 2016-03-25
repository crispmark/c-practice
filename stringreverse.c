//Reverse a string entered into command line
#include <stdio.h>
#include <stdlib.h>

//given a string, returns its length
int stringLength(char * str) {
  int end = 0;
  int length = 0;
  while (end == 0) {
    if (str[length] == '\0') {
      end = 1;
    }
    else {
      length++;
    }
  }
  return length;
}

//given a string, return the reverse string
char * reverseString(char * str, char * buff) {
  int length = stringLength(str);
  for (int i = 0; i < length; i++) {
    buff[i] = str[length - i - 1];
  }
  buff[length + 1] = '\0';
  return buff;
}

int main() {
  char input[20];
  char * buff;
  printf("Enter String:");
  scanf("%s", input);
  buff = (char *) malloc(stringLength(input) + 1);
  reverseString(input, buff);
  printf(buff);
  free(buff);
  printf("\n");
  return 0;
}
