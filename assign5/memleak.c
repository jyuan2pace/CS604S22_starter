//Currently there are memory leaks in the code
//TODO: Please fix all the memory leaks
//Your code will be tested against Valgrind to ensure there are no memory violations. 
//The output of the program (what it prints) should not change.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

  int * a = malloc(sizeof(int *));

  *a = 10;  

  printf("%d\n", *a);

  a = malloc(sizeof(int *)*3);
  a[0] = 10;
  a[1] = 20;
  a[2] = 30;

  printf("%d %d %d\n", a[0], a[1], a[2]);

}
