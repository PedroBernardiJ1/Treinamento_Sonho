#include <iostream>

using namespace std;

int main (){
    
    int robo {};
    cout << "O robô está ligado? (Sim -> 1 , Não -> 0) ";
    cin >> robo;
    
    double bateria {};
    double distancia {};

    if (robo == 1){
        
        cout << "Qual distância o robô percorreu (em centímetros)? ";
        cin >> distancia;

        if (distancia < 4){
            cout << "Erro de sensor. Leitura inválida." << endl;
        
        } else if (distancia > 400){
            cout << "Erro de sensor. Leitura inválida." << endl;
        
        } else {
            if (distancia < 10){
                cout << "Parar imediatamente." << endl;
           
            } else if (distancia > 30){
                cout << "Seguir normalmente." << endl;
            
            } else {
                cout << "Reduzir velocidade." << endl;
            }
        }  
    } else {
        cout << "Qual é o nível de bateria do robô? ";
        cin >> bateria;

        if (bateria < 20){
            cout << "Bateria crítica. Recarregue o robô" << endl;
        
        } else {
            cout << "Falha no acionamento. Verificar sistema elétrico." << endl;
        }
    }

    return 0;
}