#include <iostream>

using namespace std;

int main(){
    
    int tempo {};
    
    cout << "Digite o tempo em segundos: ";
    cin >> tempo;
    
    const int hora_conv {3600};
    int hora {tempo / hora_conv};
    int tempo2 {tempo % hora_conv};
    const int minuto_conv {60};
    int minuto {tempo2 / minuto_conv};
    int segundo {tempo2 % minuto_conv};

    cout << tempo << " segundos equivalem a: " << hora << "h " << minuto << "m " << segundo << "s" << endl;
    
    return 0;
}