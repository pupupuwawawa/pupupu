#include<stdio.h>

int main(void)
{
	int max = 10000;

	for (int i = 1; i <= max; i++)
	{
		if (i % 221 == 0)
		{
			printf("FizzBuzz%8dn",i);
		}
		else if (i % 17 == 0)
		{
			printf("Fizz%8d\n",i);
		}
		else if (i % 13 == 0)
		{
			printf("Buzz%8d\n",i);
		}
	}

	return 0;
}


			



