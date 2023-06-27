#include<iostream>
#include<iomanip>
using namespace std;


double total(int units,double price) {
    return units * price;
}

int main() {
    int code, units;
    double price;
    double totalPrice = 0;
    for (int i = 0; i < 2; i++) {
        cin >> code >> units >> price;
        totalPrice += total(units, price);
    }
    cout << "VALOR A PAGAR: R$ " << fixed<<setprecision(2) << totalPrice << endl;
    return 0;
}
