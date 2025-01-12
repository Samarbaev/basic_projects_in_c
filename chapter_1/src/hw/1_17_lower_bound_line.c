#include <stdio.h>
#define MAXLINE 1000 /* Максимальная длина строки в потоке */
#define MIN 80

int getl(char line[], int maxline);

int main() {
  int len; /* длина текущей строки */

  char currentLine[MAXLINE]; /* текущая вводимая строка */

  while ((len = getl(currentLine, MAXLINE)) > 0) {
    if (len > MIN) {
      printf("%s", currentLine); 
    }  
  }
  return 0;
}

/*  getline: считывает строку в s, возвращает ее длину */
int getl(char s[], int lim) {
  int c,i;
  
  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if(c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  
  return i;
}
