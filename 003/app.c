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

	return 0;
}