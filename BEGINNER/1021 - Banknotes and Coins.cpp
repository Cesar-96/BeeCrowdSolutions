#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;

void bankNotes(int &n) {
	int notes[] = {100,50,20,10,5,2};
	int i = 0;
	while (i < sizeof(notes) / 4)
	{
		cout << n / notes[i] << " nota(s) de R$ " << notes[i] <<".00"<< endl;
		n = n % notes[i];
		i++;
	}
}

int floatToInt(float n)
{
	return n;
}

int parteFlotante(float n) {
	return round((n - floatToInt(n))*100);
}

void bankCoins(int n) {
	int coins[] = {50,25,10,5,1};
	int i = 0;
	while (i < sizeof(coins) / 4)
	{
		cout << n / coins[i] << " moeda(s) de R$ " <<fixed<<setprecision(2) << coins[i] / 100.0 << endl;
		n = n % coins[i];
		i++;
	}
}

int main() {
	float n;
	cin >> n;
	int temp =  floatToInt(n);
	cout << "NOTAS:" << endl;
	bankNotes(temp);
	//temp es la parte 1 que sobra
	cout << "MOEDAS:" << endl;
	cout << temp << " moeda(s) de R$ " << 1<<".00" << endl;
	//cout<<parteFlotante(n);
	bankCoins(parteFlotante(n));
	return 0;
}
