#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  char *a_endptr; 
  float a = strtod(argv[1], &a_endptr);
  char *b_endptr; 
  float b = strtod(argv[2], &b_endptr);
  if (a_endptr == argv[1] || b_endptr == argv[2]){
    printf("ERROR");
  }
  else{
    printf("%f\n", a * b);
  }
  return 0;
}
