#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float f {1.0 / 3.0};
    double d {1.0f / 3.0f};
    long double l {1.0 / 3.0};

    bool comp1 = (f * 3.0 == 1.0);
    bool comp2 = (d * 3.0 == 1.0);
    bool comp3 = (l * 3.0 == 1.0);

    cout << boolalpha;
    
    cout << left << fixed << setprecision (25);
    cout << "float: " << f << " (Exatamente 1.0? " << comp1 << ")" << endl;
    cout << "double: " << d << " (Exatamente 1.0? " << comp2 << ")" << endl;
    cout << "long double: " << l << " (Exatamente 1.0? " << comp3 << ")" << endl;

    return 0;
}
