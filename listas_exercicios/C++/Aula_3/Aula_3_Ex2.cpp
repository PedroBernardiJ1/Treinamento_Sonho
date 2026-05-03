#include <iostream>

using namespace std;

int main (){
    
    double num_1 {};
    cout << "Digite o dividendo: ";
    cin >> num_1;

    double num_2 {};
    cout << "Digite o divisor: ";
    cin >> num_2;

    double resultado {num_1 / num_2};

    if (num_2 == 0){
        cout << "Não é possível realizar a divisão: Divisão por 0!" << endl;
    } else {
        cout << "É possível realizar a divisão, resultando em: " << resultado << endl;
    }

    return 0;
}