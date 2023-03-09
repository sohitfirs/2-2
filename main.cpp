/* https://github.com/sohitfirs/2.2.git */

#include <stdio.h>
#include <cstdlib>

main()
{
	int a,b;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	
	if (a > b)
	{
		printf("bol'she\n");
	}
	else 
	{
		if (a == b)
		{
			printf("ravny\n");
		}
		else
		{
			printf("men'she\n");
		}
	}
	system ("pause");
}
