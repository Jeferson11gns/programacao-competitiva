#include <iostream>

using namespace std;

int main(){
	
	int n, a, i, soma=0;
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> a;
		soma += a;
		if(soma >= 1000000) break;
	}

	return 0;
}
