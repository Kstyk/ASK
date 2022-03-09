#include <stdio.h>
#include <stdlib.h>

void main() {
	printf("process.c\n\n");

	int x;
	int y;
	int a;
	int b;

	int *c = (int *)malloc(4*sizeof(int)); 
	int *d = (int *)malloc(8*sizeof(int)); 

	int *p_x = &x;
	int *p_y = &y;
	int *p_a = &a;
	int *p_b = &b;	

	printf("&x = %p\n", p_x);
	printf("&y = %p\n", p_y);
	printf("&a = %p\n", p_a);
	printf("&b = %p\n", p_b);
	printf("&c = %p\n", c);
	printf("&d = %p\n", d);

/*
    1) Przypadek - zmienne a i b niezainicjowane:

	x [ ][ ][ ][ ]   &x = 0061FE8C
	y [ ][ ][ ][ ]   &y = 0061FE88
	a [ ][ ][ ][ ]   &a = 0061FE84
	b [ ][ ][ ][ ]   &b = 0061FE80

	2) Przypadek - zmienne a i b zainicjowane:
	
	x [ ][ ][ ][ ]   &x = 0061FE8C
	y [ ][ ][ ][ ]   &y = 0061FE88
	a [1][ ][ ][ ]   &a = 0061FE84
	b [2][ ][ ][ ]   &b = 0061FE80
	
	3) Przypadek - tylko zmienna a zainicjowana:

	x [ ][ ][ ][ ]   &x = 0061FE8C
	y [ ][ ][ ][ ]   &y = 0061FE88
	a [1][ ][ ][ ]   &a = 0061FE84
	b [ ][ ][ ][ ]   &b = 0061FE80
	
	4) Przypadek - tylko zmienna b zainicjowana:

	x [ ][ ][ ][ ]   &x = 0061FE8C
	y [ ][ ][ ][ ]   &y = 0061FE88
	a [ ][ ][ ][ ]   &a = 0061FE84
	b [2][ ][ ][ ]   &b = 0061FE80


	Adresy zmiennych s¹ zgodne z map¹ pamiêci dla procesu - w przypadku
	odk³adania zmiennych na stos nie ma znaczenia ich zainicjalizowanie.
*/

/*
	Zmienne na stercie inicjalizujemy poprzez malloc, czyli rezerwowanie pamiêci, z biblioteki stdlib. Adresy tych zmiennych zgadzaj¹ siê
	
*/
}

