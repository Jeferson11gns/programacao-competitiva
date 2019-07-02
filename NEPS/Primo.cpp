#include <iostream>

using namespace std;

bool eh_primo(int x){
    int i, cont = 0;
    for(i = 2; i <= x; i++){
        if(x%i == 0) cont++;
    }
    if(cont == 1) return true;

    return false;
}

int main(){
    int x;

    cin>>x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
}