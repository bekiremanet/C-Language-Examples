#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
#include "conio.h"


int main()
{
	
	int ch;

	printf("evet mi (e), hayir mi? (h): ");

	while ((ch = _getch()) != 'e' && ch != 'h')
	{ 
		;
	}

	if (ch == 'e')
		printf("evet dediniz");

	else if (ch == 'h')
		printf("hayir dediniz");
	

}








