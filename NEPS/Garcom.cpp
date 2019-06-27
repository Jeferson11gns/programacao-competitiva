#include <iostream>

using namespace std;

int main(){

	int n, l, c, i, cont = 0;
	cin >> n;
	
	for(i=0; i < n; i++){
		cin >> l >> c;
		if(l > c) cont += c; 
	}
	
	cout << cont;
	
	return 0;
}
