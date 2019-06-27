#include <stdio.h>

int main(){

	int n, cont= 0, res = 0, i, j;
	
	scanf("%d", &n);
	int v[n];
	
	for(i = 0; i < n; i++) scanf("%d", &v[i]);
	
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
		
			if(v[i] == v[j]) cont++;
			else break;
			
		}
		
		if(cont > res) res = cont;
			
		cont = 0;
		
	}
	
	printf("%d", res);
	
	return 0;
}
