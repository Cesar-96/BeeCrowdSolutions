#include<iostream>
using namespace std;

void numberType(int x)
{
    if(x==0)
    {
        cout<<"NULL"<<endl;
        return;
    }
    else if(x%2==0)
    {
        cout<<"EVEN ";
        if(x>0)
        {
            cout<<"POSITIVE"<<endl;
        }
        else
        {
            cout<<"NEGATIVE"<<endl;
        }
    }
    else{
        cout<<"ODD ";
        if(x>0)
        {
            cout<<"POSITIVE"<<endl;
        }
        else
        {
            cout<<"NEGATIVE"<<endl;
        }
    }

}

int main(){
    int n,number;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>number;
        numberType(number);
    }
    return 0;
}
