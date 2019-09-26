#include<stdio.h>
char x;
int fun() {
	char delta = 7;
	x = x + delta;
	return x;
}
int main() {
	x = 32+15;
	printf("Pirms, %c \n", x); //Sheitparaadaasburts...jo...
	fun();
	printf("Peec 1 reizes, %c \n", x); //Peec1.reizesparaadaasburts...jo...
	fun();
	printf("Peec 2 reizeem, %c \n", x); //Peec2.reizesparaadaasburts...jo...
}
