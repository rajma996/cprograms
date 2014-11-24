#include<stdio.h>
unsigned long long int ipow(unsigned long long int base, unsigned long long int exp)
{
	unsigned long long int result = 1;
	int c;
	while (exp)
	{
		if (exp&1)
		{
			result *= base;
		}
		exp >>= 1;
		base *= base;
	}

	return result;
}

int main(){
	unsigned long long int n,m,k;
	printf("%llu\n",ipow(2,13));
	return 0;
}
