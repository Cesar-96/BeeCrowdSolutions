#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int i = 0;
    while (i < cases)
    {
        float n1, n2;
        cin >> n1 >> n2;
        if (n2 == 0)
        {
            cout << "divisao impossivel" << endl;
            i++;
            continue;
        }
        cout << fixed<<setprecision(1)<< n1 / n2 << endl;
        i++;
    }

    return 0;
}
