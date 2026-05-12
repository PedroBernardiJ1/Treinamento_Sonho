#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    
    int N {};

    cout << "Digite quantas distâncias devem ser checadas: ";
    cin >> N;

    int angulo {180 / (N - 1)};
   
    float sensor[N];

    for (int i = 0; i < N; i++){

        cout << "Digite a distância do objeto no ângulo de " << i * angulo << "° (em cm) ";
        cin >> sensor[i];
    }

    cout << endl;

    float menor_distancia = sensor[0];
    int indice = 0;
    float menor_angulo = 0;

        for (int i = 0; i < N; i++){
            if (sensor[i] < menor_distancia){
                
                menor_distancia = sensor [i];
                indice = i;
                menor_angulo = i * angulo;

            }
        
        }
    
    cout << fixed << setprecision (2);

    cout << "Varredura Completa." << endl;
    cout << "Menor distância detectada: " << menor_distancia << " cm" << endl;
    cout << "Índice do obstáculo: " << indice << endl;
    cout << "Ângulo de saída: " << menor_angulo << "°" << endl;
    
    return 0;
}