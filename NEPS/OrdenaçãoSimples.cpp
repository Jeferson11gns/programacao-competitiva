#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n, i;
    cin >> n;
    int v[n];

    for(i = 0; i < n; i++) cin >> v[i];

    sort(v, v+n);

    for(i = 0; i < n; i++) cout << v[i] << " ";


    return 0;
}