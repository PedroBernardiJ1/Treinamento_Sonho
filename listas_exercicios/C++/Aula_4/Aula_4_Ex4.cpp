#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    float coord_X {};
    float coord_Y {};

    cout << fixed << setprecision(2);

    for (int coordenada = 1; ; coordenada++){

        cout << "Coordenadas detectadas (X, Y): ";
        cin >> coord_X >> coord_Y;

        float distancia {hypot(coord_X, coord_Y)};

        if(distancia == 0){
            break;

        } else if (distancia >= 2){
            cout << "Objeto detectado em [" << coord_X << ", " << coord_Y << "]" << endl;
            cout << "Distância Euclidiana: " << distancia << "m -> Caminho livre." << endl;

        } else {
            cout << "Objeto detectado em [" << coord_X << ", " << coord_Y << "]" << endl;
            cout << "Distância Euclidiana: " << distancia << "m -> ALERTA: Risco de colisão!" << endl;
        }

        cout << endl;
    }

    cout << "[0,0] recebido. Encerrando monitoramento." << endl;

    return 0;
}
