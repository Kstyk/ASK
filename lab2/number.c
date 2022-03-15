#include <stdio.h>
#include <math.h>

int polinomial(unsigned char *p, int n) {
	unsigned int suma = 0;
	
	int i;
	
	for (i = 0; i < n; i++) {
		suma = suma + *(p+i) * pow(256,i);
	}
	
	return suma;
}

int main() {
	printf("number.c\n\n");
	
	char x[] = {4,1,0,0};
	
	int n = sizeof(x);
	
	void *p = &x;
	
	printf("number(%p, %u) = %u\n", p, n, polinomial(p, n));
	
	return 0;
}
