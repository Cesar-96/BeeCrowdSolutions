#include<iostream>
#include<vector>
using namespace std;


void solve(){
    for(int i=1;i<=9;i=i+2)
    {
        for(int j=0;3>j;j++)
        {
            cout<<"I="<<i<<" J="<<(i+6)-j<<endl;
        }
    }
}

int main(){
    solve();
}
