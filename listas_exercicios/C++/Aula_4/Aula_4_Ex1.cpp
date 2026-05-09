#include <iostream>

using namespace std;

int main(){

    int N {};

    cout << "Digite a altura da pirâmide: ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        
        for (int l = 1; l <= i; l++){
            cout << "*";
        }
        cout << endl << endl;
    }
    
    for(int i = 1; i <= N; i++){
        for (int espaco = 1; espaco <= N - i; espaco++){
            cout << " ";
        }

        for (int r = 1; r <= i; r++){
            cout << "*";
        }
        cout << endl << endl;
    }
    
    for(int i = 1; i <= N; i++){
        for (int espaco = 1; espaco <= N - i; espaco++){
            cout << " ";
        }

        for (int c = 1; c <= (2 * i) - 1; c++){
            cout << "*";
        }
        cout << endl << endl;
    }


return 0;
}
