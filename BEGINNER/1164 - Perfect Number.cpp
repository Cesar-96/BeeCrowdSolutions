#include <iostream>
#include<string>
#include<vector>

using namespace std;

vector<int> divisors(int x) {
    vector<int> temp;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0) {
            temp.push_back(i);
        }
    }
    return temp;
}

int sum(vector<int> x) {
    int suma = 0;
    for (int i = 0; i < x.size(); i++)
    {
        suma += x[i];
    }
    return suma;
}

void isPerfect(int x)
{
    vector<int> temp = divisors(x);
    if (sum(temp) == x) {
        cout << x << " eh perfeito" << endl;
    }
    else {
        cout << x << " nao eh perfeito" << endl;
    }
}

int main()
{
    int n,numb;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numb;
        isPerfect(numb);
    }
}
