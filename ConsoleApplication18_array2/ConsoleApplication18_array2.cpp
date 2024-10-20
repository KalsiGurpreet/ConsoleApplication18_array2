#include<stdio.h>

int main(void)
{
	int i, numbers[5];
	numbers[4] = 0;

	for (i = 0; i < 4; i++)
	{
		numbers[i] = 2012;
	}
	printf("First element @ index 0 is  %d\n", numbers[0]);
	printf("Second element @ index 1 is %d\n", numbers[1]);
	printf("Third element @ index 2 is  %d\n", numbers[2]);
	printf("Fourth element @ index 3 is %d\n", numbers[3]);
	printf("Fifth element @ index 4 is  %d\n", numbers[4]); //it is 0 as no value is assigned.

	return 0;
}