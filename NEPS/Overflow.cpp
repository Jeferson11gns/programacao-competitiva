#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n, p, q, res;
    char ope;

    cin >> n >> p >> ope >> q;

    switch (ope){
        case '+':
            res = p + q;
            break;

        case '*':
            res = p * q;
            break;

        default:
            break;
    }

    if(res <= n) cout << "OK";
    else cout << "OVERFLOW";

    return 0;
}