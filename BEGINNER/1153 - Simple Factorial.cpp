#include <iostream>
#include<vector>
using namespace std;

int factorial(int x)
{
    int mult=1;
    for (int i=x;i>1;i--)
    {
        mult*=i;
    }
    return mult;
}

int main()
{
    int x;
    cin>>x;
    cout<<factorial(x)<<endl;
    return 0;
}
