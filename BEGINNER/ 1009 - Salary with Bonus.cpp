#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    char name[20];
    double s, v;
    cin >> name >> s >> v;
    cout << "TOTAL = R$ " <<fixed<<setprecision(2)<< s + v * 0.15 << endl;
    return 0;
}
