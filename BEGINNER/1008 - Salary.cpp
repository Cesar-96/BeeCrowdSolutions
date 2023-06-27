#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n, h;
    float ph;
    cin >> n >> h >> ph;
    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << h*ph<<endl;
    return 0;
}
