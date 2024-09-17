#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  printf("%c\n", *(argv[2]));
  return (int)*(argv[1]) + (int)*(argv[2]);
}
