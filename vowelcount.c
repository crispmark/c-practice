#include <stdbool.h>
#include <stdio.h>
#include <string.h>
//Counts the vowels in a string provided by the user

//given a string, return the number of vowels
int countVowels(char * str) {
  bool end = true;
  int length = strlen(str);
  int vowelCount = 0;
  for (int i = 0; i < length; i++) {
    switch(str[i]){
      case 'A':
      case 'a':
      case 'E':
      case 'e':
      case 'I':
      case 'i':
      case 'O':
      case 'o':
      case 'U':
      case 'u':
      vowelCount++;
    }
  }
  return vowelCount;
}

int main() {
  char inputstring[100];
  int vowelCount;
  char intString[10];
  printf("Enter string:");
  scanf("%s", inputstring);
  vowelCount = countVowels(inputstring);
  sprintf(intString, "%d", vowelCount);
  printf("The string \"");
  printf(inputstring);
  printf("\" has ");
  printf(intString);
  printf(" vowels.");
  printf("\n");
}
