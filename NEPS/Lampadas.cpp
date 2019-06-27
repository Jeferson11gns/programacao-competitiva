#include <iostream>

using namespace std;

int main(){
	
	int n, a = 0, b = 0, inter;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> inter;
		
		if(inter == 1){
			if(a == 0) a = 1;
			else a = 0;
		}else{
			if(a == 0) a = 1;
			else a = 0;
			
			if(b == 0) b = 1;
			else b = 0;
		}		
	
	}
	
	cout << a << endl <<  b << endl;
	
	return 0;

}
