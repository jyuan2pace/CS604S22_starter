
#include <stdio.h>

int main() {
	float _res;
	int _i = 3;
	int _p = 2;		

	_res =  _i / _p;
	//This prints out 1.000000 because the / is an integer division
	//TODO: please modify the expression above (in line 9) so the division yields a real number (1.500000 in this case) WITHOUT changing the declared type of _i or _p.	
	//hint: try to make either divisor or dividend a float type
	
	printf("%f\n", _res);
	return 0;
}
