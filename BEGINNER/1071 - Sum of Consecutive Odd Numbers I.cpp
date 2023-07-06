#include <iostream>
#include <string>
#include<vector>
#include<math.h>

using namespace std;

vector<int> mayMen(int a ,int b) {
	vector<int> list;
	if (a - b >= 0) {
		list.push_back(a);
		list.push_back(b);
	}
	else if(b-a>0) {
		list.push_back(b);
		list.push_back(a);
	}
	return list;
}

int main() {
	int a, b;
	int sum = 0;
	cin >> a >> b;
	vector<int> filas = mayMen(a, b);
	int mayor= *(filas.begin());
	int menor = *(filas.end() - 1);
	//cout << mayor << menor << endl;
	for (int i = menor+1; i <mayor; i++)
	{
		if(i % 2 != 0)
		{
			sum += i;
		}
	}
	cout << sum << endl;
	//cout << *filas.begin();
	//cout << *(filas.end()-1);

	return 0;
}
