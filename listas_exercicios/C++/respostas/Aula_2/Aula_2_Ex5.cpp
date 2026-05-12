#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int numero {};
    
    cout << "Digite um número de 4 dígitos: ";
    cin >> numero;
    
    const int milhar_conv {1000};
    int milhar {numero / milhar_conv};
    int numero2 {numero % milhar_conv};
    const int centena_conv {100};
    int centena {numero2 / centena_conv};
    int numero3 {numero2 % centena_conv};
    const int dezena_conv {10};
    int dezena {numero3 / dezena_conv};
    int unidade {numero3 % dezena_conv};

    cout << "Dígito 1 (milhar):" << setw (4) << milhar << endl;
    cout << "Dígito 2 (centena):" << setw (3) << centena << endl;
    cout << "Dígito 3 (dezena):" << setw (4) << dezena << endl;
    cout << "Dígito 4 (unidade):" << setw (3) << unidade << endl;
    
    return 0;
}