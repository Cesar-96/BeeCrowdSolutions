#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>

using namespace std;


int main()
{
    float a;
    int i = 0;
    int pos = 0;
    while (i < 6)
    {
        cin >> a;
        if (a > 0) pos++;
        i++;
    }
    cout << pos << " valores positivos" << endl;
    return 0;
}

