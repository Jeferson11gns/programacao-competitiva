#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n, x, y, a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0,h = 0,i = 0, j = 0;
    scanf("%d", &n);
    string k[n];

    for(x = 0; x < n; x++) cin >> k[x];
   
    for(x = 0; x < n; x++){
         for(y = 0; k[x][y]; y++){
            
             switch (k[x][y]){
                case '0':
                    j++;
                    break;
                case '1':
                    a++;
                    break;

                case '2':
                    b++;
                    break;
                
                case '3':
                    c++;
                    break;
                
                case '4':
                    d++;
                    break;

                case '5':
                    e++;
                    break;

                case '6':
                    f++;
                    break;

                case '7':
                    g++;
                    break;

                case '8':
                    h++;
                    break;

                case '9':
                    i++;
                    break;

                default:
                    break;
             }
        }
    }
    
    cout << "0" << " - " << j << endl;
    cout << "1" << " - " << a << endl;
    cout << "2" << " - " << b << endl;
    cout << "3" << " - " << c << endl;
    cout << "4" << " - " << d << endl;
    cout << "5" << " - " << e << endl;
    cout << "6" << " - " << f << endl;
    cout << "7" << " - " << g << endl;
    cout << "8" << " - " << h << endl;
    cout << "9" << " - " << i << endl;


    return 0;
}
