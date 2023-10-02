#include <iostream>
 
using namespace std;
 
int main() {
    int number;
    while(number!=2002)
    {
        cin>>number;
        if(number!=2002)
        {
            cout<<"Senha Invalida"<<endl;
        }
    }
    cout<<"Acesso Permitido"<<endl;
 
    return 0;
}
