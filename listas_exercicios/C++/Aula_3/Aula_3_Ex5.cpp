#include <iostream>
#include <string>

using namespace std;

int main (){
    
    int pessoa {};
    cout << "Qual tipo de pessoa está utilizando o sistema? (1 -> Aluno, 2 -> Professor, 3 -> Visitante): ";
    cin >> pessoa;
    
    string nome {};
    string dado {};

    switch(pessoa){
        
        case 1:
            cout << "Nome do aluno: ";
            cin >> nome;

            cout << "Número USP: ";
            cin >> dado;

            cout << endl;

            cout << "Bem-vindo ao sistema." << endl;
            cout << "Tipo de usuário: Aluno" << endl;
            cout << "Nome: " << nome << endl;
            cout << "Número USP: " << dado << endl;
            break;

        case 2:
            cout << "Nome do professor: ";
            cin >> nome;

            cout << endl;

            cout << "Departamento: ";
            cin >> dado;

            cout << "Bem-vindo ao sistema." << endl;
            cout << "Tipo de usuário: Professor" << endl;
            cout << "Nome: " << nome << endl;
            cout << "Departamento: " << dado << endl;
            break;

        case 3:
            cout << "Nome do visitante: ";
            cin >> nome;

            cout << "Instituição de origem: ";
            cin >> dado;

            cout << endl;

            cout << "Bem-vindo ao sistema." << endl;
            cout << "Tipo de usuário: Visitante" << endl;
            cout << "Nome: " << nome << endl;
            cout << "Instituição de origem: " << dado << endl;
            break;

        default:
            cout << "Opção inválida." << endl;
    }

    return 0;
}