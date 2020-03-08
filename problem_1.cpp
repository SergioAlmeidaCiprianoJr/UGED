#include <bits/stdc++.h>
using namespace std;
 
int main(){
	
	int total = 0, limit;
	scanf("%d", &limit);
	for(int i=1; i<limit; i++)
		total += (i%3==0 or i%5==0) ? i : 0;
	printf("%d\n", total);
	return 0;
}

