#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double velocidade {};
    
    cout << "Digite a velocidade em km/h: ";
    cin >> velocidade;
    
    const double conv_ms {3.6};
    double ms {velocidade / conv_ms};
    const double conv_mph {1.609344};
    double mph {velocidade / conv_mph};

    cout << "==============================" << endl;
    cout << "  Conversão de Velocidade    " << endl;
    cout << "==============================" << endl;
    
    cout << fixed << setprecision (2);
    cout << "km/h:" << setw (18) << velocidade << endl;
    cout <<  "m/s:" << setw (19) << ms << endl;
    cout <<  "mph:" << setw (19) << mph << endl;

    return 0;
}