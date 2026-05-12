#include <iostream>

using namespace std;

int main (){
    
    double a {};
    cout << "Digite o valor do primeiro lado: ";
    cin >> a;

    double b {};
    cout << "Digite o valor do segundo lado: ";
    cin >> b;

    double c {};
    cout << "Digite o valor do terceiro lado: ";
    cin >> c;

    if (a + b > c){
        if (a + c > b){
            if (b + c > a){
                if (a == b){
                    if (b == c){
                        cout << "Os lados formam um triângulo: Equilátero!" << endl;
                    } else {
                        cout << "Os lados formam um triângulo: Isósceles!" << endl;
                    }
                } else {
                    if (b == c){
                        cout << "Os lados formam um triângulo: Isósceles!" << endl;
                    } else {
                    cout << "Os lados formam um triângulo: Escaleno!" << endl;
                    }
                }
            } else {
                cout << "Os lados NÃO formam um triângulo!" << endl;
            }
        } else {
            cout << "Os lados NÃO formam um triângulo!" << endl;
        }  
    } else {
        cout << "Os lados NÃO formam um triângulo!" << endl;
    }

    return 0;
}
