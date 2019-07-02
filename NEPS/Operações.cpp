#include <iostream>
#include <stdio.h>

using namespace std;


int main(){

    char ope;
    double a, b, res;

    cin >> ope;
    cin >> a >> b;
    
    if(a == 0 && b == 0) res = 0.00;
    else if(ope == 'M' || ope == 'm') res = a * b;
    else if(ope == 'D' || ope == 'd') res = a / b;
    
    printf("%.2lf", res);
    
    return 0;
}