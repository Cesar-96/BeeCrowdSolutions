#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


double pi = 3.14159;

double sphereVolume(double r) {
    return (4 / 3.0)* pi* (pow(r, 3.0));
}

int main() {

    double radio;
    cin >> radio;
    cout << fixed << setprecision(3)<<"VOLUME = " << sphereVolume(radio) << endl;
    return 0;
}
