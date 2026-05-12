#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    float t {};
    cout << "Digite a temperatura inicial (em °C): ";
    cin >> t;

    float t_alvo {};
    cout << "Digite a temperatura alvo (em °C): ";
    cin >> t_alvo;

    int minuto_total {0};

    cout << fixed << setprecision(2);

    for(int minuto = 1; t > t_alvo; minuto++){
        
        float t_momento {t - t * 0.08};

        cout << "Minuto " << minuto << ": " << t_momento << " °C" << endl;

        t = t_momento;
        
        minuto_total++;
    }
    
    cout << endl;
    
    cout << "Temperatura segura atingida. Tempo de resfriamento: " << minuto_total << " minutos." << endl;

    return 0;
}
