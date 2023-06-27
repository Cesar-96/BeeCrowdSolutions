#include <iostream>
#include<math.h>
#include<iomanip>

using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    //bhaskara's formula
    if (sqrt(pow(b, 2) - 4.0 * a * c) > 0.0 && a != 0.0) {
        float ans1 = (( - b) + sqrt(pow(b, 2) - 4.0 * a * c)) / (2 * a);
        float ans2 = (( - b) - sqrt(pow(b, 2) - 4.0 * a * c)) / (2 * a);
        cout << "R1 = " <<fixed<<setprecision(5) << ans1 << endl;
        cout << "R2 = " << fixed << setprecision(5)<< ans2 << endl;
    }
    else {
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}
