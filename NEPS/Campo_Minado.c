#include <stdio.h>

int main(){

	int n, i,j, cont = 0;
	scanf("%d", &n);
	
	int campo[n];
	
	for(i = 0; i < n; i++) scanf("%d", &campo[i]);
	
	for(i = 0; i < n; i++){
		for(j = i+1; j >= i-1; j--){
			if(campo[j] == 1) cont++;	
		}
		printf("%d\n", cont);
		cont = 0;	
	}

	

	return 0;
}
