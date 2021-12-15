#include <stdio.h>
#include <math.h>
int main() {
	double x{}, function_1, function_2, function_3;
	/*
	ctg=1/tan
	cosec=1/sin
	*/
	function_1 = 1 / tan(x + (1 / sin(pow(x, -2))));
	function_2 = log10(log(x) + ((log(x)) / (log(3))));
	function_3 = cos(pow(x,5));
	
	x = 2;
	while (x <= 5) {
		if (x < 3)
           printf("%f",function_1 );
	     if (x >= 3 || x < 4)
			printf("%f", function_2);
		if (x >= 4)
			printf("%f", function_3);
		x = x+0.2;
           }
	return 0;
}