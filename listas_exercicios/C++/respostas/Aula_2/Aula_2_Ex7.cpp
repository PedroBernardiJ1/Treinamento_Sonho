#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double horas {};
    cout << "Digite quantas horas foram trabalhadas: ";
    cin >> horas;

    double v_hora {};
    cout << "Digite o valor da hora: ";
    cin >> v_hora;
    
    double salario_bruto {horas * v_hora};

    const double taxa_INSS {0.11};
    const double taxa_IRRF {0.15};
    const double taxa_sindicato {0.01};
    const double taxa_VT {0.06};
    const double taxa_FGTS {0.08};
    
    double INSS {salario_bruto * taxa_INSS};
    double IRRF {salario_bruto * taxa_IRRF};
    double sindicato {salario_bruto * taxa_sindicato};
    double VT {salario_bruto * taxa_VT};
    double FGTS {salario_bruto * taxa_FGTS};

    double desconto {INSS + IRRF + sindicato + VT};
    double salario_liquido {salario_bruto - desconto};
    
    cout << endl;

    cout << fixed << setprecision (2);

    cout << left << setw(27) << "Salario Bruto:" << "R$ " << right << setw(8) << salario_bruto << endl;
    cout << left << setw(27) << "(-) INSS (11%):" << "R$ " << right << setw (8) << INSS << endl;
    cout << left << setw(27) << "(-) IRRF (15%):" << "R$ " << right << setw(8) << IRRF << endl;
    cout << left << setw(27) << "(-) Sindicato (1%):" << "R$ " << right << setw(8) << sindicato << endl;
    cout << left << setw(27) << "(-) Vale Transporte (6%):" << "R$ " << right << setw(8) << VT << endl;
    cout << "=======================================" << endl;
    cout << left << setw(27) << "Total de Descontos:" << "R$ " << right << setw(8) << desconto << endl;
    cout << left << setw(27) << "Salario Liquido:" << "R$ " << right << setw(8) << salario_liquido << endl;
    cout << "=======================================" << endl;
    cout << left << setw(27) << "FGTS Recolhido (8%):" << "R$ " << right << setw(8) << FGTS << endl;

    return 0;
}