#include <stdio.h>

int main(void) {
  char str[1000];
  scanf("%[^\n]%*c", str);
  int x, i, val;
  scanf("%d", &x);
  i = 0;

  char * token = strtok(str, " ");
  while( token != NULL ) {
    val = atoi(token);
    if (val == x) {
      i++;
    } token = strtok(NULL, " ");
  } printf("%d", i);

  return 0;
}