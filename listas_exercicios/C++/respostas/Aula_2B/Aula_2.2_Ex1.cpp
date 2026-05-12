#include <iostream>
#include <iomanip>
#include <cmath>
#include <numbers>

using namespace std;

int main(){
    
    double a {};
    cout << "Digite o cateto a: ";
    cin >> a;

    double b {};
    cout << "Digite o cateto b: ";
    cin >> b;

    double h {sqrt (pow(a,2) + pow(b,2))};

    double A {a * b / 2};

    const double Pi {numbers::pi};
    double alpha {atan(a/b) * (180/Pi)};

    cout << "===============================" << endl;
    cout << "  Triângulo Retângulo          " << endl;
    cout << "===============================" << endl;

    cout << left << fixed << setprecision (2);
    cout << setw (20) << "Cateto a:" << a << endl;
    cout << setw (20) << "Cateto b:" << b << endl;
    cout << setw (20) << "Hipotenusa:" << h << endl;
    cout << setw (21) << "Área:" << A << endl;
    cout << setw (20) << "Ãngulo (graus):" << alpha << endl;

    return 0;
}
