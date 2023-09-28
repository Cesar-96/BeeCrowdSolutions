#include<iostream>
using namespace std;

void prime(int x){
    int divisors{0};
    for(int i=1;i<=x;i++)
    {
        if(x%i==0){
            divisors++;
        }
    }
    if(divisors==2)
    {
        cout<<x<<" eh primo"<<endl;
    }
    else{
         cout<<x<<" nao eh primo"<<endl;
    }
}

int main(){
    int cases,number;
    cin>>cases;
    while(cases)
    {
        cin>>number;
        prime(number);
        cases--;
    }
    return 0;
}
