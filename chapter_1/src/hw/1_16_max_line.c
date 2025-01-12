#include <stdio.h>
#define MAXLINE 1000

/* Это должна была быть задача 1.16, не смог разобраться в условии, что требуется сделать, поэтому решил просто скопировать задачку для поиска максимальной строки из входного потока */

int getl(char line[], int maxSize);
void copy(char from[], char to[]);

int main() {
  
  int length;
  int max;
  char currentline[MAXLINE];
  char maxLine[MAXLINE];

  max = 0;

  while ((length = getl(currentline, MAXLINE)) > 0) {
    if(length > max) {
      max = length;
      copy(currentline, maxLine);
    }
  }

  if (max > 0) {
    printf("Max length line = %d\n", max);
    printf("This line is %s\n", maxLine);
  }

  return 0;
}

int getl(char line[], int maxSize) {
  int c, i;

  for (i = 0; i < maxSize - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void copy(char from[], char to[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0') {
    ++i;
  }

}
