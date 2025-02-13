#include <stdio.h>
#include <stdlib.h>

int main () {
	int a = malloc(sizeof(int));
	a = 0;
	a += 1;
	a += 1;
	printf("%d",a);
	return 0;
}
