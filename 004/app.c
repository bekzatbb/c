#include <stdio.h>

int main(void)
{
	int b;
	printf("Enter A Value: ");
	scanf("%d", &b);
	if (b < 0)
	{
		printf("The Value Is Negative\n");
	}
	else if (b == 0)
	{
		printf("The Value Is Zero\n");
	}
	else
	{
		printf("The Value Is Positive\n");
	}

	return 0;
}