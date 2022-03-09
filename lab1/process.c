#include <stdio.h>
#include <stdlib.h>

	int a1 = 0;
	int b1 = 2;
	
	int a2,b2;
	
	int a3 = 3;
	int b3;
	
	int a4;
	int b4 = 9;

void main() {
	printf("process.c\n\n");

	int x;
	int y;

	int *c;
	c = (int *)malloc(4*sizeof(int));
	int *d;
	d = (int *)malloc(12*sizeof(int)); 

	int *p_x = &x;
	int *p_y = &y;
	int *p_a1 = &a1;
	int *p_b1 = &b1;
	int *p_a2 = &a2;
	int *p_b2 = &b2;
	int *p_a3 = &a3;
	int *p_b3 = &b3;
	int *p_a4 = &a4;
	int *p_b4 = &b4;
		
	printf("Adresy x i y na stosie: \n");
	printf("&x = %p\n", p_x);
	printf("&y = %p\n", p_y);
	
	printf("\nAdresy zmiennych a i b - zainicjalizowanych:\n");
	printf("&a = %p\n", p_a1);
	printf("&b = %p\n", p_b1);
	
	printf("\nAdresy zmiennych a i b - niezainicjalizowanych:\n");
	printf("&a = %p\n", p_a2);
	printf("&b = %p\n", p_b2);
	
	printf("\nAdresy zmiennych a i b - zainicjalizowana tylko a:\n");
	printf("&a = %p\n", p_a3);
	printf("&b = %p\n", p_b3);
	
	printf("\nAdresy zmiennych a i b - zainicjalizowana tylko b:\n");
	printf("&a = %p\n", p_a4);
	printf("&b = %p\n", p_b4);
	
	printf("\nAdresy zmiennych c i d na stercie:\n");
	printf("&c = %p\n", c);
	printf("&d = %p\n", d);

/*
	x [ ][ ][ ][ ]   &x = 0061FE94
	y [ ][ ][ ][ ]   &y = 0061FE90

    Adresy zmiennych umieszczonych w sekcji danych zgadzaj¹ siê z map¹ pamiêci
    w programie w jêzyku C. Zmienne zainicjalizowane maj¹ mniejsze adresy od tych niezainicjalizowanych.
    
    Zmienne c i d s¹ umieszczane na stercie. Za ka¿dym uruchomieniem programu te zmienne maj¹ inny adres.
    Adresy zgadzaj¹ siê z map¹ pamiêci.
    
*/
}

