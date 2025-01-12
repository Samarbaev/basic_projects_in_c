#include <stdio.h>
#define MAXLINE 1000 
#define MIN 80

int getl(char line[], int maxline);
void removeBlankOrTabs(char line[], int legnth);

int main() {
  int len; 

  char currentLine[MAXLINE]; 

  while ((len = getl(currentLine, MAXLINE)) > 0) {
      removeBlankOrTabs(currentLine, len);
      printf("%s", currentLine);
  }
  return 0;
}

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

void removeBlankOrTabs(char line[], int length) {
  for(int i = 0; i <= length; i++) {
    if(line[i] == ' ' || line[i] == '\t') {
      line[i] = '\b';
    } else {
      i = length + 1;
    }
  }
}

