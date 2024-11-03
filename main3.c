#include <stdio.h>

int main (){
	int son, on, bir, result = 0;
	scanf("%d", &son);
	bir = son % 10;
	on = son / 10;
	result = on + bir;
	printf("birliklar xonasi %d\n", bir);
	printf("onliklar xonasi %d\n", on);
	printf("yigindisi %d + %d = %d", bir, on, result);

	return 0;

}
