#include <iostream>
#include<math.h>
#include<iomanip>
#include<vector>

using namespace std;

float average(float a,float b,float c,float d) {
    float r[] = { a,b,c,d };
    float q[] = { 0.2,0.3,0.4,0.1 };
    float ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans += r[i] * q[i];
    }
    ans = floor(ans * 10);
    return ans/10;
}

int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    cout<< "Media: " <<fixed<<setprecision(1) << average(a, b, c, d) << endl;
    if (average(a, b, c, d) >= 5.0 && average(a, b, c, d) <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        float exam;
        cin >> exam;
        cout << "Nota do exame: " << exam << endl;
        if (exam >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: "<<fixed<<setprecision(1) << (exam + average(a, b, c, d)) / 2 << endl;

    }
    else if (average(a, b, c, d) >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (average(a, b, c, d) < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
}

