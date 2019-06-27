#include <stdio.h>

int main(){

	int n, i, cont = 0;
	scanf("%d", &n);
	
	int v[n];
	
	for(i = 0; i < n; i++) scanf("%d", &v[i]);
	
	for(i = 0; i < n-2; i++){
		if(v[i]==1 && v[i+1] == 0 && v[i+2] == 0) cont++;
	}
	
	printf("%d", cont);

	return 0;
}
