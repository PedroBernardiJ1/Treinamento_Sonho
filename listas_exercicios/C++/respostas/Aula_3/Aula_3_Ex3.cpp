#include <iostream>

using namespace std;

int main (){
    
    int ano {};
    cout << "Digite o ano: ";
    cin >> ano;

    if (ano % 4 == 0){
        if (ano % 100 == 0){
            if (ano % 400 == 0){
                cout << "O ano informado é bissexto!" << endl;
            } else {
                cout << "O ano informado NÃO é bissexto!" << endl;
            }
        } else {
            cout << "O ano informado é bissexto!" << endl;
        }  
    } else {
        cout << "O ano informado NÃO é bissexto!" << endl;
    }

    return 0;
}