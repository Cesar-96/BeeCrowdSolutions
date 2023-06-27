#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

float alCuadrado(float x) {
	return x * x;
}

int main() {
	float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << fixed << setprecision(4) << sqrt(alCuadrado(x2 - x1) + alCuadrado(y2 - y1)) << endl;
	return 0;
}
