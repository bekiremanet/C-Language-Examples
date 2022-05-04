#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{	
	
	int a, b, c, d, e, f;

	a = 0x400 ; 	//DEC1024
	b = 0xaa ;	//DEC170
	c = 0xff ;	//DEC255
	d = 0xb2 ;	//DEC178
	e = 0x41 ;	//DEC65
	f = 0x30 ;	//DEC48

	printf("%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e);

	return 0;

}
