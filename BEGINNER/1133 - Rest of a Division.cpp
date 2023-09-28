#include<iostream>
#include<vector>
using namespace std;


int main(){
    int a,b;
    cin>>a>>b;
    int min,max;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else{
        min=a;
        max=b;
    }
    vector<int> divisors;
    for(int i=min+1;i<max;i++)
    {
        if(i%5==2||i%5==3)
        {
           divisors.push_back(i);     
        }
    }
    for(int i=0;i<divisors.size();i++)
    {
        cout<<divisors[i]<<endl;
    }
    return 0;
}
