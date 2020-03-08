#include <bits/stdc++.h>

using namespace std;

double fib(double n);

int main(){

	int sum = 0;
	for(double i = 0; i>=0; i++)
	{
		int fibonacci = (int) fib(i);
		if(fibonacci>4000000) break;
		sum += fibonacci%2==0 ? fibonacci : 0;
	}	
	printf("%d\n", sum);
	
	return 0;
}

double fib(double n)
{
	double fi = (1+sqrt(5))/2;
	return (pow(fi, n) - pow(1-fi, n))/sqrt(5);
}
