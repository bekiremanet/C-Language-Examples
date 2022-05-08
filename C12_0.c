#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
#include "conio.h"

int sumDigit(int x);
int digitRev(int x);
int nDigit(int x);

int main()
{
	/*
	int ch;

	while ((ch = getchar()) != '\n')
	{
		printf("%d   %c\n", ch, ch);
	}
	*/

	/*
	int ch;
	
	while ((ch = getchar()) != '\n')
	{
		putchar(ch);
	}

	*/
	
	int number = 13654;

	printf("%d sayisinin basamaklari toplami: %d\n", number, sumDigit(number));
	printf("%d sayisinin basamak sayisi: %d\n", number, nDigit(number));
	printf("%d sayisinin basamaksal tersi: %d\n", number, digitRev(number));
}

int sumDigit(int x)   
{
	int sum = 0;

	while (x)
	{
		sum = sum + (x % 10);
		x = x / 10;
	}

	return sum;
}

int nDigit(int x)
{
	int digit_count = 0;

	if (!x)
	{
		return 1;
	}

	while (x)
	{
		++digit_count;
		x = x / 10;
	}

	return digit_count;
}

int digitRev(int x)
{
	int sum = 0;

	while (x)
	{
		sum = sum * 10 + x % 10;
		x = x / 10;
	}

	return sum;
	

}








