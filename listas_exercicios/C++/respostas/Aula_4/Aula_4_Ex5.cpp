#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    float opcao {};
    float numero_1 {};
    float numero_2 {};
    float resultado {};
    
    do {
        
        cout << "1 -> Somar dois números" << endl;
        cout << "2 -> Subtrair dois números" << endl;
        cout << "3 -> Multiplicar dois números" << endl;
        cout << "4 -> Dividir dois números" << endl;
        cout << "5 -> Sair" << endl;
        cout << endl;

        cout << "Escolha uma opção (1-5): ";
        cin >> opcao;

        cout << endl;
        
        if(opcao == 1){

            cout << "Digite o primeiro número: ";
            cin >> numero_1;

            cout << "Digite o segundo número: ";
            cin >> numero_2;
            
            resultado = numero_1 + numero_2;

            cout << "Resultado da soma: " << resultado << endl;

            cout << endl;

        } else if(opcao == 2){

            cout << "Digite o primeiro número: ";
            cin >> numero_1;

            cout << "Digite o segundo número: ";
            cin >> numero_2;
            
            resultado = numero_1 - numero_2;

            cout << "Resultado da substração: " << resultado << endl;

            cout << endl;
        
        } else if(opcao == 3){

            cout << "Digite o primeiro número: ";
            cin >> numero_1;

            cout << "Digite o segundo número: ";
            cin >> numero_2;
            
            resultado = numero_1 * numero_2;

            cout << "Resultado da multiplicação: " << resultado << endl;

            cout << endl;

        } else if(opcao == 4){

            cout << "Digite o primeiro número (dividendo): ";
            cin >> numero_1;

            cout << "Digite o segundo número (divisor): ";
            cin >> numero_2;
            
            if (numero_2 == 0){

                cout << "Erro: Divisão por zero não permitida.";

                cout << endl;

            } else {

                resultado = numero_1 / numero_2;
                cout << "Resultado da divisão: " << resultado << endl;
                
                cout << endl;

            }

        } else if (opcao == 5){

            cout << "Encerrando o programa" << endl;
            
        } else {

            cout << "Opção inválida" << endl;

            cout << endl;

        }
    } while (opcao != 5);

    return 0;

}
