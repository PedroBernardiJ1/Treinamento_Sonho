#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int inteiro {42};
    short dec_curto {100};
    long long dec_longo{500000};
    float PI {3.14f};
    double dec {2.72};
    char letra {'A'};
    bool verdadeiro {true};
    bool falso {false};
    
    cout << "=================================" << endl;
    cout << "Tipo" << setw(15) << "Valor" << setw(10) << "Bytes" << endl;
    cout << "=================================" << endl;

    cout << boolalpha;
    
    cout << "int" << setw (16) << inteiro << setw (10) << sizeof (inteiro) << endl;
    cout << "short" << setw (14) << dec_curto << setw (10) << sizeof (dec_curto) << endl;
    cout << "long long" << setw (10) << dec_longo << setw (10) << sizeof (dec_longo) << endl;
    cout << "float" << setw (14) << PI << setw (10) << sizeof (PI) << endl;
    cout << "double" << setw (13) << dec << setw (10) << sizeof (dec) << endl;
    cout << "char" << setw (15) << letra << setw (10) << sizeof (letra) << endl;
    cout << "bool" << setw (15) << verdadeiro << setw (10) << sizeof (verdadeiro) << endl;
    cout << "=================================" << endl;

    return 0;
}