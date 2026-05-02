#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double temperatura {};
    
    cout << "Digite a temperatura em Celsius: ";
    cin >> temperatura;

    double fahrenheit {temperatura * 9 /5 + 32};
    const double soma_kelvin {273.15};
    double kelvin {temperatura + soma_kelvin};

    cout << "==============================" << endl;
    cout << "  Conversão da Temperatura    " << endl;
    cout << "==============================" << endl;
    
    cout << fixed << setprecision (2);
    cout << "Celsius:" << setw (14) << temperatura << " °C" << endl;
    cout <<  "Fahrenheit:" << setw (11) << fahrenheit << " °F" << endl;
    cout <<  "Kelvin:" << setw (16) << kelvin << " K" << endl;

    return 0;
}