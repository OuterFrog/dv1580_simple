#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  char *a_endptr; 
  int a = strtol(argv[1], &a_endptr, 10);
  char *b_endptr; 
  int b = strtol(argv[2], &b_endptr, 10);
  if (a_endptr == argv[1] || b_endptr == argv[2]){
    printf("-ERROR-\n");
  }
  else{
    printf("%d\n", a + b);
  }
  return 0;
}
