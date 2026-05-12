#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double resistencia {};
    cout << "Digite a resistência (ohms): ";
    cin >> resistencia;

    double tensao {};
    cout << "Digite a tensão (volts): ";
    cin >> tensao;

    double tempo {};
    cout << "Digite o tempo (horas): ";
    cin >> tempo;
    
    double corrente {tensao / resistencia};
    double potencia {tensao * corrente};
    const int energia_conv {1000};
    double energia {potencia / energia_conv * tempo};
    
    cout << endl;

    cout << fixed << setprecision (2);
    
    cout << "==========================================" << endl;
    cout << "          Circuito Elétrico               " << endl;
    cout << "==========================================" << endl;

    cout << setfill('.') << left;
    cout << setw (23) << "Resistência" << " " << resistencia << " ohms" << endl;
    cout << setw (23) << "Tensão" << " " << tensao << " V" << endl;
    cout << setw (22) << "Corrente" << " " << corrente << " A" << endl;
    cout << setw (23) << "Potência" << " " << potencia << " W" << endl;
    cout << setw (22) << "Tempo" << " " << tempo << " h" << endl;
    cout << setw (22) << "Energia consumida" << " " << energia << " kWh" << endl;

    return 0;
}