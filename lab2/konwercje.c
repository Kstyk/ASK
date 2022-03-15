#include <stdio.h>
#include <math.h>

/*
11 / 2 = 5   r0 = 1
5 / 2  = 2   r1 = 1
2 / 2  = 1   r2 = 0
1 / 2  = 0   r3 = 1

	 3210
11 = 1011 =	1*2^0 + 1*2^1 + 0*2^2 + 1*2^3 = 1 + 2 + 0 + 8 = 11

*/
int dec2bin(int x) {
	unsigned int suma = 0;
	unsigned int pow = 1;
	
	while (x > 0) {
		suma += x % 2 * pow;
		
		x /= 2;
		
		pow *= 10;
	}
	
	return suma;
}

int bin2dec(int x) {
	unsigned int suma = 0;
	unsigned int i = 0;
	unsigned int temp;
	
	while (x > 0) {
		temp = x % 10;		
		x /= 10;
		suma += temp * pow(2,i);
		
		i++;
	}
	
	return suma;
}

void dec2byte(int x) {
	unsigned char *p = (char*)&x;

	char bytes[] = {*p, *(p+1), *(p+2), *(p+3)};
	
	printf("\ndec3 = %u\n",x);
	
	int i;
	for (i = 0; i < sizeof(bytes); i++) {
		printf("[%u]", bytes[i]);
	}

}

int main() {
	printf("konwersje.c\n\n");
	
	unsigned int dec = 1023;
	unsigned int bin = dec2bin(dec);
	
	printf("dec = %u\n",dec);
	printf("bin = %u\n",bin);
	
	unsigned int bin2 = 1011;
	unsigned int dec2 = bin2dec(bin2);
	
	printf("\nbin2 = %u\n",bin2);
	printf("dec2 = %u\n",dec2);
	
	dec2byte(515);
	return 0;
}

/*
jak¹ maksymaln¹ liczbê binarn¹ mo¿na zapisaæ przy pomocy typu int bez znaku?

UINT_MAX = 4294967295

UDIN_MAX = 1111111111
*/
