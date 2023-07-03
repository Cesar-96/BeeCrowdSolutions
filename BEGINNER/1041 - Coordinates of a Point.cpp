#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>

using namespace std;



void solve(float x,float y) {
    if (x > 0.0 && y > 0.0)
    {
        cout << "Q1" << endl;
    }
    else if (x < 0.0 &&  y > 0.0)
    {
        cout << "Q2" << endl;
    }
    else if (x < 0.0 && y < 0.0)
    {
        cout << "Q3" << endl;
    }
    else if (x > 0.0 && y < 0.0)
    {
        cout << "Q4" << endl;
    }
    else if (x == 0.0 && y == 0.0)
    {
        cout << "Origem"<<endl;
    }
    else if (x == 0 && y != 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (y == 0 && x != 0)
    {
        cout << "Eixo X" << endl;
    }
}

int main()
{
    float x, y;
    cin >> x >> y;
    solve(x, y);
    return 0;
}

