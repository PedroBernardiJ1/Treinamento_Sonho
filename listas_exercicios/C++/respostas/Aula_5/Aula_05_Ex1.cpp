#include <iostream>

using namespace std;

int main (){
    
    int sensor[6];

    for (int i = 0; i < 6; i++){

        cout << "Qual é o estado do sensor [" << i << "]? (0 -> INATIVO // 1 -> ATIVO) ";
        cin >> sensor[i];
    }

    cout << endl;
    
    cout << "--- Diagnóstico Rollerbot ---" << endl;
    
    for (int i = 0; i < 6; i++){

        if (sensor[i] == 1){
            cout << "Sensor [" << i << "]: ATIVO" << endl;
        } else {
            cout << "Sensor [" << i << "]: INATIVO" << endl;
        }
        
    }
    
    cout << "----------------------------" << endl;
    
    return 0;
}