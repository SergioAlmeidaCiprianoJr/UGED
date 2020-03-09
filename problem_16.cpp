#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int size = 500, arr[size], sum=0, power;
	scanf("%d", &power);

	for(int i = 1; i<size; i++) arr[i] = 0;
	arr[0] = 1;
	
	for(int i = 0; i<power; i++)
	{

		for(int j = 0; j<size; j++)
			arr[j] *= 2;

		for(int j = 0; j<size; j++)
		{
			arr[j+1] += arr[j]/10;
			arr[j] = arr[j]%10;
		}

	}

	for(int i = 0; i<size; i++) sum+=arr[i];
	printf("%d\n", sum);

	return 0;
}

