#include <stdio.h>
#include<math.h>
int main() {
	float x, y, z;
	int e= 2.718;

	scanf_s("%f", &x);
	scanf_s("%f", &y);
	z = y * cbrtf(x * y) + y * sin(x * y) - pow(e, x * y) * cos(x * y) + (7.1 / (x * y));
	printf("%f", z);

	return 0;
}
	