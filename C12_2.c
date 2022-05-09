#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
#include "conio.h"
#include "time.h"
#include "limits.h" // Limit Library.

int main()
{
	int ch;
	int number;
	int counter = 0;
	int sum = 0;
	int mean = 0;
	int min = INT_MIN;  // 4 byte integer en küçük değer. MACROS.
	int max = INT_MAX;  // 4 byte integer en büyük değer. MACROS.
	

	srand((unsigned)time(0));


	while (1)
	{
		printf("Sayi girecek misiniz (e)(h)? : ");

		while ((ch = _getch()) != 'e' && ch != 'h')
		{
			;
		}

		printf("%c\n", ch);
		
		if (ch == 'h')
		{
			break;
		}

		printf("Bir sayi giriniz: ");
		
		number = (rand() % 2 ? 1 : -1) * rand();
		

		if (number < min)
		{
			min = number;
		}
		else if (number > max)
		{
			max = number;
		}

		++counter;
		sum += number;
		mean = sum / counter;

		printf("%d\n", number);
	}

	printf("Girilen sayi adedi: %d \n", counter);
	printf("Girdiginiz sayilarin ortalamasi: %d \n", mean);
	printf("Girdiginiz sayilarin toplami: %d \n", sum);
	printf("Girdiginiz sayilarin en buyugu: %d \n", max);
	printf("Girdiginiz sayilarin en kucugu: %d \n", min);

}








