#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- prints random number to variable
 *
 * Return : Always (Successful)
 */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX/2;
	printf("%d id %d and is",last,n,n%10);
	if(n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if(n % 10 == 0)
	{
		printf("0\n");
	else
	{
		printf("less than 6 and not 0\n");
	}
	return(0);
} 