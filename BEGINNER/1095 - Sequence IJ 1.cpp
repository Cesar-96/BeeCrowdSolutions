#include<iostream>
using namespace std;

int main(){
    int i=1,j=60;
    while(j!=0)
    {
        cout<<"I="<<i<<" J="<<j<<endl;
        i=i+3;
        j=j-5;
    }
    cout<<"I="<<i<<" J="<<j<<endl;
    return 0;
}
