#include <stdio.h>

int main (){

	int a, birlik,  onlik, yuzlik;
	scanf("%d", &a);
	birlik = a % 10;
	onlik = (a % 100) / 10;
	yuzlik = a / 100;
	printf("birlik xonasi %d\n", birlik);
	printf("onlik xonasi %d\n", onlik);
	printf("yuzlik xonasi %d\n", yuzlik);


	return 0;
}

