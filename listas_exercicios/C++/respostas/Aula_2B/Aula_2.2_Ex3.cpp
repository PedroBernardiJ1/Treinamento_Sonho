#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    
    int numero {};
    cout << "Digite um número inteiro na base decimal: ";
    cin >> numero;

    cout << left << fixed;
    cout << "Dec: " << dec << numero << " | Hex: " << hex << numero << " | Oct: " << oct << numero << endl;

    cout << dec;

    int bits = ceil (log2(numero + 1));
    cout << "Bits necessários: " << bits << endl;

    int tamanho_bits {sizeof(int) * 8};
    cout << "Bits do int: " << tamanho_bits << endl;

    int bits_desperdicados = (tamanho_bits - bits);
    cout << "Bits desperdiçados: " << bits_desperdicados << endl;

    return 0;
}
