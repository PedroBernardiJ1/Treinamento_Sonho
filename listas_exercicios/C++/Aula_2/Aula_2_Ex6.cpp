#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int numero {};
    
    cout << "Digite um número de 3 dígitos: ";
    cin >> numero;
    
    const int centena_conv {100};
    int centena {numero / centena_conv};
    int numero2 {numero % centena_conv};
    const int dezena_conv {10};
    int dezena {numero2 / dezena_conv};
    int unidade {numero2 % dezena_conv};

    cout << "Número original:" << setw (5) << numero << endl;
    cout << "Número invertido:" << setw (2) << unidade << dezena << centena << endl;
    
    return 0;
}