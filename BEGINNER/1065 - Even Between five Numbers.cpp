#include<iostream>
using namespace std;
int main() {
    int number;
    int numbPares{ 0 };
    for (int i = 5; i >= 1; i--)
    {
        cin >> number;
        if (number % 2 == 0)
        {
            numbPares++;
        }
    }
    cout << numbPares << " valores pares" << endl;
    return 0;
}
