#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    float x {};
    float y {};
    float angulo {};
    
    float v {};
    float w {};
    float dt {};

    cout << "Digite a posição inicial do robô" << endl;
    cout << "Digite a posição no eixo X (em m): ";
    cin >> x;
    cout << "Digite a posição no eixo Y (em m): ";
    cin >> y;
    cout << "Digite a angulação (em rad): ";
    cin >> angulo;

    cout << endl;

    while (true) {

        cout << "Digite o comando de movimento" << endl;
        cout << "Digite a velocidade linear (em m/s): ";
        cin >> v;

        if (cin.fail()) {
            
            cout << "Erro de leitura detectado! Encerramento de segurança...";
            break;

        }
    
        cout << "Digite a velocidade angular (em rad/s): ";
        cin >> w;
        cout << "Digite o temṕo (dt) de duração do movimento (em segundos): ";
        cin >> dt;

        cout << endl;

        if (dt < 0) {
            
            cout << "Tempo de movimento (dt) negativo detectado. Encerrando leituras..." << endl;
            cout << endl;

            break;

        }

        x = x + (v * dt * cos (angulo));
        y = y + (v * dt * sin (angulo));
        angulo = angulo + (w * dt);

        cout << "Posicao atualizada:" << endl;
        cout << "X = " << x << ", Y = " << y << ", Ângulo = " << angulo << endl;

        cout << endl;

    }

    cout << "===== POSIÇÃO FINAL DO ROBÔ =====" << endl;
    cout << "X = " << x << " m" << endl;
    cout << "Y = " << y << " m" << endl;
    cout << "Ângulo = " << angulo << " rad" << endl;
    cout << "=================================";

    return 0;
}
