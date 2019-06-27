#include <stdio.h>

int pd[100010];

int fibo(int n){
	if(n <= 1) return 1;
	
	if(pd[n] != -1) return pd[n];
	
	return pd[n] = fibo(n-1) + fibo(n-2);
}
int main(){
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) pd[i] = -1;
	

	printf("%d", fibo(n-1));
	

	return 0;
}
