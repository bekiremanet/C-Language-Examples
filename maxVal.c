#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{	

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	

	printf("%d", max3(a,b,c));

	return 0;

}

int max3(int x, int y, int z)
{
	if (x > y)
	{
		if (x > z)
		  return x;
	}
	else
	{
		if (y > z)
			return y;
		else
			return z;
	}

}
