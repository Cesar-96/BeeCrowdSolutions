#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int number;
    int i = 0;
    while (i < cases)
    {
        cin >> number;
        cout << "resposta " << i+1<<": " << number << endl;
        i++;
    }

    return 0;
}
