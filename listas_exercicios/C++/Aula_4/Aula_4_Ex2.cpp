#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int leituras_validas {};
    float valor {};

    cout << fixed << setprecision(2);

    for(int leitura = 1; leitura <= 5; leitura++){
        cout << "Digite a leitura do sensor " << leitura << ": ";
        cin >> valor;
        
        if(valor < 0){
            cout << "[ERRO] Leitura " << leitura << " ignorada por ruído" << endl;
            continue;
        }

        leituras_validas++;

        cout << "Leitura " << leitura << " registrada: " << valor << endl;
    }
    
    cout << endl;
    
    cout << "Total de leituras válidas processadas: " << leituras_validas << endl;

    return 0;
}
