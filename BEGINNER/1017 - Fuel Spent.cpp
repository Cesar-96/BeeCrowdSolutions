#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;



int main() {
	float b, c;
	int a = 12;
	cin >> b>>c;
	cout << fixed << setprecision(3) << b * c / a << endl;
	return 0;
}
