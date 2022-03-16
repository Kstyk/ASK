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

int horner(unsigned char *p, int n) {
	unsigned int suma =  *(p+n-1);
	
	int i;
	
	for (i = n-2; i>=0; i--) {
		suma = *(p+i) + suma*256;
	}
	
	return suma;
}

int main() {
	printf("number.c\n\n");
	
	char x[] = {3,2,0,0};
	
	int n = sizeof(x);
	
	void *p = &x;
	
	printf("number(%p, %u) = %u\n", p, n, polinomial(p, n));
	printf("number (horner)(%p, %u) = %u\n", p, n, horner(p, n));
	
	
	return 0;
}
