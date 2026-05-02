#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>

using namespace std;

int main(){
    
    double C {};
    cout << "Digite o valor emprestado (R$): ";
    cin >> C;

    double i {};
    cout << "Digite a taxa de juros mensal (%): ";
    cin >> i;

    double t {};
    cout << "Digite o número de meses: ";
    cin >> t;

    const double potencia {pow((1 + i/100), t)};
    double M {C * potencia};
    double juros_total {M - C};
    double parcela {C * ((i/100) * potencia) / (potencia - 1)};

    cout << "===========================================" << endl;
    cout << "      Simulador de Empréstimo              " << endl;
    cout << "===========================================" << endl;

    cout << setfill('.') << fixed << setprecision (2) << left;
    cout << setw (23) << "Capital emprestado" << " R$" << right << setfill(' ') << setw (10) << C << endl;
    cout << left << setfill('.') << setw (23) << "Taxa mensal" << " " << i << "%" << endl;
    cout << setw (24) << "Número de meses" << " " << t << endl;

    cout << "===========================================" << endl;
    cout << "          Resultados                       " << endl;
    cout << "===========================================" << endl;
    
    cout << left << setw (23) << "Montante final" << " R$" << right << setfill(' ') << setw (10) << M << endl;
    cout << left << setfill('.') << setw (23) << "Total de juros" << " R$" << right << setfill(' ') << setw (10) << juros_total << endl;
    cout << left << setfill('.') << setw (23) << "Parcela Mensal (Price)" << " R$" << right << setfill(' ') << setw (10) << parcela << endl;

    return 0;
}
