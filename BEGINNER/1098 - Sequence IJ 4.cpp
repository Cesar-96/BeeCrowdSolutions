#include<iostream>
#include<vector>
using namespace std;


void solve(){
    for(double i=0;i<=2;i=i+0.2)
    {
        for(double j=0;3>j;j++)
        {
            cout<<"I="<<i<<" J="<<(j+1)+i<<endl;
        }
    }
}

int main(){
    solve();
}
