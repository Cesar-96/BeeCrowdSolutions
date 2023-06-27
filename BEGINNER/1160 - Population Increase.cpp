#include <iostream>
using namespace std;

int popIncrByYear(int a, double pra)
{
    double varCre;
    varCre = a * (pra / 100);
    return varCre;
}

int answer(int a, int b, double pra, double prb) {
    int anios=0;
    while (a <= b)
    {
        a = a + popIncrByYear(a,pra);
        b = b + popIncrByYear(b,prb);
        anios++;
    }
    return anios;
}


int main()
{
    int t;
    cin >> t;
    int a, b;
    double pra, prb;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> pra >> prb;
        if (answer(a,b,pra,prb) > 100) {
            cout << "Mais de 1 seculo." << endl;
        }
        else{
            cout << answer(a, b, pra, prb) << " anos." << endl;
        }
    }
}
