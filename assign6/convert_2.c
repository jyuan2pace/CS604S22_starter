#include<stdio.h>
#include<stdlib.h>
//Program to convert a 32-bit Decimal numbers to Binary
// 1) No globals are allowed.
// 2) Your code must properly manage memory. All the dynamically allocated memory must be freed after use and there should be no memory accesses out of bound.
// 3) The output of binary value follows the format of grouping every four bits together with a space between groups. for instance,
// The Binary Notation of -1 is     0b1111 1111 1111 1111 1111 1111 1111 1111
// Please check sample outputs for more details 
// 4) Do not change the signature of convert_2, or your task receives zero

char* convert_2(int dec)
{
	//TODO: your implementation
}

int main() {
	int n;
	char * bin;
	printf("Enter the Decimal Number\n");
	scanf("%d",&n);
	bin = convert_2(n);
	printf("The Binary Notation of %d is\t %s\n", n, bin);
	//TODO: do we need to release the memory of bin? who is responsible for releasing malloc-ed memory? who is using the memory for the last time?
	// #who-used-up-last-inch-toilet-paper-replenish-it
}

