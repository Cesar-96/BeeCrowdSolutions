#include <iostream>
#include<vector>
using namespace std;

int sumando(int number)
{
    int suma=0;
    for(int i=0;i<5;i++)
    {
        if(number%2==0)
        {
            suma+=number;
            number+=2;
        }
        else{
            suma+=number+1;        
            number+=2;    
        }
    }
    return suma;
}
  
int main()
{
    vector<int> numbers;
    int number;
    int suma;
    do{
        cin>>number;
        numbers.push_back(number);
    }while(number);
    
    for(int i=0;i<int(numbers.size()-1);i++)
    {
        cout<<sumando(numbers[i])<<endl;
    }

    return 0;
}
