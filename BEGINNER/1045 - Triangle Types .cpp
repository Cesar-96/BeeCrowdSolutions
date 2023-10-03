#include<iostream>
#include<cmath>
using namespace std;

double* orden(double a,double b,double c)
{
    static double arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    int aux;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(arr[j]>arr[j+1])
            {
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;
            }
        }
    }
    return arr;
}

int main(){
    double a,b,c;
    double* arrt;
    cin>>a>>b>>c;
    arrt=orden(a,b,c);

    if(arrt[2]>=arrt[1]+arrt[0])
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
        return 0;
    }

    if(pow(arrt[2],2)==pow(arrt[1],2)+pow(arrt[0],2))
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if(pow(arrt[2],2)>pow(arrt[1],2)+pow(arrt[0],2))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if(pow(arrt[2],2)<pow(arrt[1],2)+pow(arrt[0],2))
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(arrt[0]==arrt[1] && arrt[1]==arrt[2] && arrt[0]==arrt[2])
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if((arrt[2]==arrt[1] && arrt[2]!=arrt[0])||(arrt[2]==arrt[0] && arrt[2]!=arrt[1]) || (arrt[1]==arrt[0] && arrt[1]!=arrt[2]))
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }

    return 0;
}
