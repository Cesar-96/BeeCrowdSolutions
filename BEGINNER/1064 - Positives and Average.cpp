#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main() {

	float number;
	float sum;
	int vpos{0};
	for (int i = 6; i > 0; i--)
	{
		cin >> number;
		if (number > 0)
		{
			vpos++;
			sum += number;
		}
	}
	cout << vpos << " valores positivos" << endl;
	cout << fixed << setprecision(1) << sum / vpos << endl;
	return 0;
}
