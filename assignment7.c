#include<stdio.h>
int checkforprime(int,int);

int main()
{
	int N,prime;
	
	printf("Input Number: ");
	scanf("%d",&N);
	
	if(N == 0 || N == 1)
	{
	printf("%d is not a prime number", N);
	}
	else
	{
		prime = isprime(N,N/2);
		if(prime == 1)
		printf("%d is a prime number", N);
		else
		printf("%d is not a prime number", N);
		
	}
	return 0;
}
	
	int isprime(int N , int i)
	{
		if(i == 1)
		{
			return 1;
		}
		else
		{
			if(N%i == 0)
			return 0;
			else
			isprime(N,i-1);
		}
	}
