#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;

float prom()
{
    float suma=0;
    float i=0;
    float edad{0};
    while(cin>>edad && edad>0)
    {
        suma+=edad;
        i++;

    }
    return suma/i;
}

int main()
{
    cout<<fixed<<setprecision(2)<<prom()<<endl;
    return 0;
}
