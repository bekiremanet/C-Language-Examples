#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
#include "conio.h"


int main()
{
	printf("isUpper:");
	for (int i = 0; i < 128; i++)
	{	
		if (isupper(i))
			putchar(i);
	}

	printf("\n");

	printf("isLower:");
	for (int i = 0; i < 128; i++)
	{
		if (islower(i))
			putchar(i);
	}

	printf("\n");

	printf("isAlpha:");
	for (int i = 0; i < 128; i++)
	{
		if (isalpha(i))
			putchar(i);
	}

	printf("\n");

	printf("isDigit:");
	for (int i = 0; i < 128; i++)
	{
		if (isdigit(i))
			putchar(i);
	}

	printf("\n");

	printf("isAlnum:");
	for (int i = 0; i < 128; i++)
	{
		if (isalnum(i))
			putchar(i);
	}

	printf("\n");

	printf("isxDigit:");
	for (int i = 0; i < 128; i++)
	{
		if (isxdigit(i))
			putchar(i);
	}

	printf("\n");

	printf("isSpace:");
	for (int i = 0; i < 128; i++)
	{
		if (isspace(i))
			putchar(i);
	}

	printf("\n");

	printf("isPrint:");
	for (int i = 0; i < 128; i++)
	{
		if (isprint(i))
			putchar(i);
	}

	printf("\n");

	printf("isGraph:");
	for (int i = 0; i < 128; i++)
	{
		if (isgraph(i))
			putchar(i);
	}

	printf("\n");

	printf("isBlank:");
	for (int i = 0; i < 128; i++)
	{
		if (isblank(i))
			putchar(i);
	}

	printf("\n");

	printf("isCntrl:");
	for (int i = 0; i < 128; i++)
	{
		if (iscntrl(i))
			putchar(i);
	}

}


