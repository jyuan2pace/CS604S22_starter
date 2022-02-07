#include <stdio.h>
//In this question you will implement string version of swap
//You are not allowed to use globals
//You are only allowed to use pass-by-address/reference

void swap_string(/*Your code here: declare parameters*/) {
	//TODO: implement string swap
    /***Your code here***/
}


int main(void){
    char * a = "Hello";
    char * b = "World";

    printf("before swap, a=%s\n", a); 
    printf("before swap, b=%s\n", b);
    //Do not modify any code above this line in main function
    
    swap_string(/*Your code here, pass in arguments*/);
    
    //Do not modify any code underneath
    printf("after swap, a=%s\n", a); 
    printf("after swap, b=%s\n", b);

}
