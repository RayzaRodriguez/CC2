#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int cd = 0;
    int dias[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int tam = 12;

    int d1,m1,an1,d2,m2,an2;
    cout<<"Ingrese el dia del anhio 1: ";
    cin>>d1;
    cout<<"Ingrese el mes del anhio 1: ";
    cin>>m1;
    cout<<"Ingrese el anhio del anhio 1: ";
    cin>>an1;
    cout<<"\nIngrese el dia del anhio 2: ";
    cin>>d2;
    cout<<"Ingrese el mes del anhio 2: ";
    cin>>m2;
    cout<<"Ingrese el anhio del anhio 2: ";
    cin>>an2;
    /*int d1=20, m1=8, an1=2008;
    int d2=31, m2=3, an2=2016;*/

    for(int a = an1;a<=an2;a++)
    {
        if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
            cd += 366;
        else
            cd += 365;
    }
    if(an1 % 4 == 0 && (an1 % 100 != 0 || an1 % 400 == 0))
        dias[1] = 29;
    for(int i = m1 - 2; i >= 0 ; i--)
    {
        cd -= dias[i];
    }

    cd -= d1-1;
    if(!(an2 % 4 == 0 && (an2 % 100 != 0 || an2 % 400 == 0)))
        dias[1] = 28;
    for(int i = m2-1; i < 12; i++)
    {
        cd -= dias[i];
    }
    cd += d2;
    double ca=cd/365.00;
    double cm=cd/30.50;
    double cs=cd/7.00;
    cout<<"\nCantidad de dias restantes: "<<cd<<endl;
    cout<<"Cantidad de semanas restantes: "<<cs<<endl;
    cout<<"Cantidad de meses restantes: "<<cm<<endl;
    cout<<"Cantidad de anios restantes: "<<ca<<endl;
    cout<<"Cantidad de segundos restantes: "<<cd*86400<<endl;
    cout<<"Cantida de minutos restantes: "<<cd*1440<<endl;
    cout<<"Cantidad de horas restantes: "<<cd*24<<endl;

    return 0;

}
