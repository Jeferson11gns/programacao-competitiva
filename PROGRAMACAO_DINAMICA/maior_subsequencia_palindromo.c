#include <bits/stdc++.h>

using namespace std;

vector<int> lis(vector<int> v){
	vector<int> ansV;
	vector<int> ansI;
	int last = 0;
	vector<int> ant(v.size());
	
	for(int i=0; i<v.size(); i++){
		int p = lower_bound(ansV.begin(), ansV.end(), v[i]) - ansV.begin();		
//		cout << "p: " << p << endl;
//		cout << "i: " << i << endl;
		if(p == ansV.size()){
			if(ansI.size() == 0)
				ant[i] = -1;
			else
				ant[i] = ansI.back();

			ansV.push_back(v[i]);
			ansI.push_back(i);
		}else{
			if(p == 0)
				ant[i] = -1;
			else
				ant[i] = ansI[p-1];

			ansV[p] = v[i];
			ansI[p] = i;
			
		}		
	}

	ansV.clear();
	last = ansI.back();
	
	while(last != -1){
		ansV.push_back(v[last]);
		last = ant[last];
	}
	reverse(ansV.begin(),  ansV.end());

	return ansV;
}

int main(){
	int n;
	cin >> n;	
	vector<int> v(n), ans;
	
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	
	ans = lis(v);
	
	cout << ans.size() << endl;
	for(int i=0; i<ans.size(); i++){
		if(i > 0)
			cout << " ";
		cout << ans[i];
	}
	
	cout << endl;
	
	return 0;
}
