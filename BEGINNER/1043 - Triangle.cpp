#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>

using namespace std;

bool triangleExist(float a, float b, float c)
{
    bool isTriangle = true;
    if (a >= b + c || b >= a + c || c >= a + b)
    {
        isTriangle = false;
    }
    return isTriangle;
}

void solve(float a, float b, float c) {
    if (triangleExist(a, b, c))
    {
        cout << "Perimetro = " <<fixed << setprecision(1) << a + b + c << endl;
    }
    else
    {
        cout << "Area = " << fixed << setprecision(1) << ((a + b) / 2) * c << endl;
    }
}

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    solve(a, b, c);
    return 0;
}

