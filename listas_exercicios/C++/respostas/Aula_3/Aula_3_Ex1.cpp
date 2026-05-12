#include <iostream>

using namespace std;

int main (){
    
    double num_1 {};
    cout << "Digite o primeiro número: ";
    cin >> num_1;

    double num_2 {};
    cout << "Digite o segundo número: ";
    cin >> num_2;

    if (num_1 == num_2){
        cout << "Os dois números são iguais!" << endl;
    } else if (num_1 > num_2){
        cout << "O primeiro número informado (" << num_1 << ") é maior!" << endl;
    } else {
        cout << "O segundo número informado (" << num_2 << ") é maior!" << endl;
    }

    return 0;
}