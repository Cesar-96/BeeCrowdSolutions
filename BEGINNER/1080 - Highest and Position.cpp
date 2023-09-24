#include <iostream>
using namespace std;
  
int main()
{

    int position=100;
    int max;

    int arr[100];
    for (int i=0;i<100;i++)
    {
        cin>>arr[i];
    }
    int arr2[100];
    //copiando datos
    for(int i=0;i<100;i++)
    {
        arr2[i]=arr[i];
    }

    for(int i=0;i<100;i++)
    {
        if(arr[i]>arr[i+1])
        {
            arr[i+1]=arr[i];
            max=arr[i+1];
        }
        else{
            max=arr[i];
        }
    }

    for(int i=0;i<100;i++)
    {
        if(arr2[i]==max)
        {
            position=i+1;
        }
    }
    cout<<max<<endl;
    cout<<position<<endl;
    return 0;
}
