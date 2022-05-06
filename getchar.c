#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"

//	getchar()

void clear_input_buffer(void)
{
	int c;

	while (c = getchar() != '\n' && c != EOF)
	{
		;
	}
}


int main()
{

	for (int i = 0; i < 10000; ++i)
	{
		printf("%d ", i);
		if (i && i % 100 == 0)
		{
			printf("\nDevam etmek için bir tusa basiniz: ");
			getchar();
		}

	}
}


