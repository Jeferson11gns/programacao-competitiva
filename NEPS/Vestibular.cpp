#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int tam, i, cont = 0;
    string ques, gabarito;

    cin >> tam;
    cin >> ques >> gabarito;

    for(i = 0; i < tam; i++){
        if(ques[i] == gabarito[i]) cont++;
    }

    cout << cont << endl;

    return 0;
}