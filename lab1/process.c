#include <stdio.h>

int c = 2;
int d;

void main() {
	printf("process.c\n\n");

	int x;
	int y;
	int a;
	int b;

	int *p_x = &x;
	int *p_y = &y;
	int *p_a = &a;
	int *p_b = &b;
	int *p_c = &c;
	int *p_d = &d;

	printf("&x = %p\n", p_x);
	printf("&y = %p\n", p_y);
	printf("&a = %p\n", p_a);
	printf("&b = %p\n", p_b);
	printf("&c = %p\n", p_c);
	printf("&d = %p\n", p_d);

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


	Adresy zmiennych s� zgodne z map� pami�ci dla procesu - w przypadku
	odk�adania zmiennych na stos nie ma znaczenia ich zainicjalizowanie.
*/

/*
	Tak, adresy zmiennych c i d zgadzaj� si� z map� procesu: trafiaj� ni�ej od zmiennych zainicjowanych w main,
	kt�re trafiaj� na stos. Zmienne globalne c i d trafiaj� na stert�.
	
	x [ ][ ][ ][ ]   &x = 0061FE8C
	y [ ][ ][ ][ ]   &y = 0061FE88
	a [ ][ ][ ][ ]   &a = 0061FE84
	b [ ][ ][ ][ ]   &b = 0061FE80
	c [ ][ ][ ][ ]   &c = 00405434
	d [ ][ ][ ][ ]   &d = 00405430
	
	Sytuacja zmieni si�, je�eli zainicjujemy zmienn� c:
	x [ ][ ][ ][ ]   &x = 0061FE8C
	y [ ][ ][ ][ ]   &y = 0061FE88
	a [ ][ ][ ][ ]   &a = 0061FE84
	b [ ][ ][ ][ ]   &b = 0061FE80
	c [2][ ][ ][ ]   &c = 00403004
	d [ ][ ][ ][ ]   &d = 00405430
	
	Adres zmiennej c po zainicjalizowaniu jest teraz mniejszy od adresu zmiennej c, co zgadza si� z map� pami�ci.
	
*/
}

