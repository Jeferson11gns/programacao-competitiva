#include <iostream>

using namespace std;

int main(){
	int p, r;
	cin >> p >> r;
	
	if(p == 1 && r == 0) cout << "B";
	else if(p == 0) cout << "C";
	else cout << "A";
	
	return 0;
}
