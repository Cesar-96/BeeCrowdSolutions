#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int number;
    cin >> number;
    while (number > 0)
    {
        double a, b, c;
        cin >> a >> b >> c;
        cout <<fixed <<setprecision(1) << a * 0.2 + b * 0.3 + c * 0.5 << endl;
        number--;
    }
    return 0;
}
