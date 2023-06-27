#include<iostream>
#include<iomanip>
using namespace std;


void solution(double a,double b,double c) {
	double temp=((a * 0.2 + b * 0.3 +c*0.5)*10)/10;
	cout << fixed << setprecision(1) << "MEDIA = " << temp<<endl;
}

int main() {
	double a, b,c;
	cin >> a >> b>>c;
	solution(a, b,c);
	return 0;
}
