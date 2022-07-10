#include <stdio.h>

int main (void) 
{
	int a, b, c;
	printf("Enter The First Value: ");
	scanf("%d", &a);
	printf("Enter The Second Value: ");
	scanf("%d", &b);
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	return 0;
}
