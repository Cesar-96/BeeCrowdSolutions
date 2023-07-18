#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    bool yes = 1;
    while (yes)
    {
        int n1, n2;
        cin >> n1 >> n2;
        if (n1 > n2)
        {
            cout << "Decrescente" << endl;
        }
        else if(n1<n2)
            cout << "Crescente" << endl;
        if (n1 == n2)
            yes = 0;
    }
    return 0;
}
