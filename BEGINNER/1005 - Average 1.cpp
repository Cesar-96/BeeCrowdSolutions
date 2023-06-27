#include<iostream>
#include<iomanip>
using namespace std;


void solution(double a,double b) {
	double temp=((a * 0.35 + b * 0.75)*10)/11;
	cout << fixed << setprecision(5) << "MEDIA = " << temp<<endl;
}

int main() {
	double a, b;
	cin >> a >> b;
	solution(a, b);
	return 0;
}
