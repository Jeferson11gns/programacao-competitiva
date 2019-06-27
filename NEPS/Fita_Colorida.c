#include <stdio.h>

int main(){

	int n, i, cont = 1;
	
	scanf("%d", &n);
	int fita[n];
	int aux[n];
	
	for(i = 0; i < n; i++) scanf("%d", &fita[i]);
	
	for(i = 0; i < n; i++){
		
		if(fita[i] == 0){
			aux[i] = 0;
			cont = 1;
			continue;
		}
		
		
		aux[i] = cont;
			
		cont++;

	}
	cont = 1;
	
	
	for(i = n-1; i >= 0; i--){
		
		if(aux[i] == 0 || aux[i] == cont){
			cont = 1;
			continue;
		}
		
		if(aux[i] != cont){
			aux[i] = cont;
			cont++;
		}

	}
	
	for(i = 0; i < n; i++) printf("%d", aux[i]);
	
		

	return 0;
}
