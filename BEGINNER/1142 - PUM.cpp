#include <iostream>
using namespace std;
  
int main()
{
    int number;
    cin>>number;
    for(int i=0;i<number*4;i++)
    {
        cout<<i+1<<" "<<i+2<<" "<<i+3;
        if((i+4)%4==0)
        {
            cout<<" PUM"<<endl;
        }
        i=i+3;
    }
    return 0;
}
