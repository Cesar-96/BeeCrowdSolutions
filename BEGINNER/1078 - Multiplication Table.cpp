#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int i=0;
    while(i<10)
    {
        cout<<i+1<<" x "<<number<<" = "<<(i+1)*number<<endl;
        i++;
    }
    return 0;
}
