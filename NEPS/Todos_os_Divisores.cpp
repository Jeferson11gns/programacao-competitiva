#include <iostream>

using namespace std;

int main(){

	int n, i, j;
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
		if(n%i == 0) printf("%d ", i);
			
	return 0;
}
