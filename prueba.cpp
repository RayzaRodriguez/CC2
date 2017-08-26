#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
   vector<int> lista;

    for(int x=0;x<1000;x++)
    {
        int cont=0;
        for(int y=1;y<=x;y++)
            {
                if(x%y==0)
                    cont++;
            }
        if(cont==2)
            lista.push_back(x);
    }
    for(int x=0;x<lista.size();x++)
        cout<<lista[x]<<" ";

    return 0;
}
