#include<iostream>
#include<vector>
using namespace std;


void solve(int number){
    cout<<number<<" "<<number*number<<" "<<number*number*number<<endl;
}

int main(){
    int number;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        solve(i);
    }
    return 0;
}
