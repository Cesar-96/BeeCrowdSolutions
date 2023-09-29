#include<iostream>
#include<vector>
using namespace std;


void solve(int arr[10]){
    for(int i=0;i<10;i++)
    {
        if(arr[i]<0 || arr[i]==0)
        {
            arr[i]=1;
        }
    }
}

int main(){
    int arr1[10];
    for(int i=0;i<10;i++)
    {
        cin>>arr1[i];
    }
    solve(arr1);
    for(int i=0;i<10;i++)
    {
        cout<<"X["<<i<<"] = "<<arr1[i]<<endl;
    }
    return 0;
}
