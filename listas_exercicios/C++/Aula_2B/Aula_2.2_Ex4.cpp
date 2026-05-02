#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>

using namespace std;

int main(){
    
    double v0 {};
    cout << "Digite a velocidade inicial (m/s): ";
    cin >> v0;

    double theta {};
    cout << "Digite o ângulo de lançamento (graus): ";
    cin >> theta;

    const double pi {numbers::pi};
    double angulo_rad {theta * pi / 180};

    double Vx {v0 * cos (angulo_rad)};
    double Vy {v0 * sin (angulo_rad)};

    const double g {9.81};
    
    double t_voo {(2 * Vy) / g};
    double alcance {Vx * t_voo};
    double h_max = {pow (Vy, 2) / (2 * g)};

    cout << "=========================================" << endl;
    cout << "       Análise de Projétil               " << endl;
    cout << "=========================================" << endl;
    
    cout << setfill('.') << fixed << setprecision (2) << left;
    cout << setw (22) << "Velocidade inicial" << " " << v0 << " m/s" << endl;
    cout << setw (24) << "Ângulo de lançamento" << " " << theta << "°" << endl;
    cout << "-----------------------------------------" << endl;
    cout << setw (22) << "Componente Vx" << " " << Vx << " m/s" << endl;
    cout << setw (22) << "Componente Vy" << " " << Vy << " m/s" << endl;
    cout << "-----------------------------------------" << endl;
    cout << setw (22) << "Tempo de voo" << " " << t_voo << " s" << endl;
    cout << setw (22) << "Alcance horizontal" << " " << alcance << " m" << endl;
    cout << setw (23) << "Altura máxima" << " " << h_max << " m" << endl;
    cout << "=========================================" << endl;

    return 0;
}


