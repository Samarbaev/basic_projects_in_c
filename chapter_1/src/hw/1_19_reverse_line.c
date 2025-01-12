#include <stdio.h> 
#define MAXLINE 1000

int getl(char line[], int maxSize);
void reverse(char s[], int length);

int main() {
  int length;

  char line[MAXLINE];

  while ((length = getl(line, MAXLINE)) > 0) {
    reverse(line, length);
    printf("reverse line is %s\n", line);
  }

  return 0;
}


int getl(char line[], int maxSize) {
  int c, i;

  for (i = 0; i < maxSize - 1 && ((c = getchar()) != EOF) && c != '\n'; ++i) {
    line[i] = c;  
  }

  if(c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void reverse(char s[], int length) {
  int i, j;

  char temp;

  for(i = 0, j = length - 1; i < j; ++i) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    --j;
  }
}
