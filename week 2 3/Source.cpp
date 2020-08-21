#include<stdio.h>
int main()
{
	int num;
	float sqr = 1, sqro = 0;
	do {
		printf("Enter non-negative number : ");
		scanf_s("%d", &num);
	} while (num <= 0);
	while (sqro != sqr) { sqro = sqr;sqr = (sqr + num / sqr) / 2; };
	printf("square root of %d is %f\n", num, sqr);
}