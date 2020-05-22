#include <stdio.h>

int main(void)
{
  unsigned long long n = 600851475143ULL; //large large integer
  unsigned long long i;

  for (i = 2ULL; i < n; i++) 
	{
    		while (n % i == 0) 
		{
			n /= i;
		} //end while
  } //end for

  printf("%llu\n", n); // not llu as type of variable

  return 0;
}