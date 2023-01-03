#include <stdio.h>
#define MAXLINE 1000

int max;  /* current longest length */
char line[MAXLINE];     /* current input line */
char longest[MAXLINE];  /* saved longest line */

int getaline();
void copy();

/* print the longest input line */
int main() {
  int len;  /* current line length */
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = getaline()) > 0) {
    if (len >= max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {  /* i.e. there was some line */
    printf("%d, %s", max, longest);
  }
  return 0;
}

/* getaline: read a line into s and return its length */
int getaline() {
  int c, i;

  for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';

  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough*/
void copy() {
  int i;

  extern char line[], longest[];

  while ((longest[i] = line[i]) != '\0') {
    ++i;
  }
}