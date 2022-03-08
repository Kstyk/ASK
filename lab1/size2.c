#include <stdio.h>
#include <limits.h>

int main() {
	printf("size2.c\n\n");

	printf("sizeof(char) = %lu\n",sizeof(unsigned char));
	printf("sizeof(short) = %lu\n",sizeof(unsigned short));
	printf("sizeof(int) = %lu\n",sizeof(unsigned int));
	printf("sizeof(long) = %lu\n",sizeof(unsigned long));
	printf("sizeof(long int) = %lu\n",sizeof(unsigned long int));
	printf("sizeof(long long) = %lu\n",sizeof(unsigned long long));
	
	return 0;
}
