#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


void descomposicion(int n) {
	int numbers[] = { 100,50,20,10,5,2,1 };
	int i = 0;
	while (i<7)
	{	
		cout << n / numbers[i] << " nota(s) de R$ " << numbers[i] << ",00" << endl;
		n = n % numbers[i];
		i++;
	}
}


int main() {
	int n;
	cin >> n;
	cout << n << endl;
	descomposicion(n);
	return 0;
}
