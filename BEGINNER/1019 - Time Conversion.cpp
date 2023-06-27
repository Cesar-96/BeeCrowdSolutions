#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

void convertTime(int sec) {
	int numbers[] = { 3600,60 };
	int i = 0;
	while (i<=1)
	{
		cout<<sec / numbers[i]<<":";
		sec = sec % numbers[i];
		i++;
	}
	cout << sec << endl;
}


int main() {
	int n;
	cin >> n;
	convertTime(n);
	return 0;
}
