#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
    double pi = 3.14159;
    double R;
    cin >> R;
    cout << "A=" <<fixed<< setprecision(4) << pi * pow(R,2)<<endl;
    return 0;
}
