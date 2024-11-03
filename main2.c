#include <stdio.h>

int main (){

	int a, b, c, d, yig = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	yig = (a + b + c + d) / 4;
	printf("yigindisi (%d + %d + %d + %d) / 4 = %d", a, b, c, d, yig);

	return 0;
}
