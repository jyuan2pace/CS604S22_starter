#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024
//The program should count each character and keep track of how many characters it sees before EOF. 
//It should also count how many whitespaces it sees along the way; we defined whitespace as either a space ‘ ‘ or a tab (special character '\t'). 
//The program should also count how many different words it sees; words are separated by whitespace or newlines. 
//wordstats should also track how many uppercase and lowercase letters it sees separately, as well as how many numeric digits it sees. 
//Finally, it should also count how many lines of text it reads; a newline indicator is '\n' (basically, you just count these).
//Check sample output for understanding the behavior of the program

int main () {
  int len = 0;
  int i;
  char buf[MAX_BUF];
  int chars = 0;
  int words = 0;
  int lines = 0;
  int whitespaces = 0;
  int uppercase = 0;
  int lowercase = 0;
  int digits = 0;

  while(fgets((buf + len), MAX_BUF, stdin) != NULL) {
    len = strlen(buf);
  }

  //Please do not modify the code above

  //Your code here
  
  //Please do not modify the code underneath
  printf("%d %d %d %d %d %d %d\n", chars, words, lines, whitespaces, uppercase, lowercase, digits);
}
