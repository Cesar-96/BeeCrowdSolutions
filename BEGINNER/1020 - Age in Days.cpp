#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;

void ageInDays(int days) {
	int conjuntos[] = {365,30,1};
	string names[] = { " ano(s)"," mes(es)"," dia(s)" };
	int i = 0;
	while (i < 3) {
		cout << days / conjuntos[i] << names[i] << endl;
		days = days % conjuntos[i];
		i++;
	}
}


int main() {
	int n;
	cin >> n;
	ageInDays(n);
	return 0;
}
