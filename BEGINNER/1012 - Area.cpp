#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

double pi = 3.14159;

void area(float a,float b,float c) {
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << a * c / 2<<endl;
    cout << "CIRCULO: " << pi * pow(c, 2)<<endl;
    cout << "TRAPEZIO: " << ((a + b) / 2) * c<<endl;
    cout << "QUADRADO: " << pow(b, 2)<<endl;
    cout << "RETANGULO: " << a * b<<endl;
}
int main() {
    float a, b, c;
    cin >> a >> b >> c;
    area(a, b, c);
    return 0;
}
