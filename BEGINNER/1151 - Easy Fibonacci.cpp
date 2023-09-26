#include <iostream>
#include<vector>
using namespace std;

int fibo(int x)
{
        if(x==1)
        {
            return 0;
        }
        else if(x==2)
        {
            return 1;
        }
        else {
            return fibo(x-1)+fibo(x-2);
        }
}

void fibo1(int x)
{
    vector<int> vector1;
    vector1.push_back(0); 
    vector1.push_back(1);
    for(int i=2;i<=x;i++)
    {
        vector1.push_back(vector1[i-1]+vector1[i-2]);
    }
    for(int i=0;i<x;i++)
    {
        if(i<x-1)
        {
            cout<<vector1[i]<<" ";
        }
        else{
            cout<<vector1[i]<<endl;
        }

    }
}

void imprimirFibo(int x)
{
    if(x>0 && x<46)
    {
        for(int i=1;i<=x;i++)
        {
            cout<<fibo(i)<<" ";
        }
    }
}


int main()
{
    int x;
    cin>>x;
    //imprimirFibo1(x);
    fibo1(x);
    return 0;
}
