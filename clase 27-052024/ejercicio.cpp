#include <iostream>
using namespace std;
int main (){

    int n=0;
    cout << "Ingrese tamaño del arreglo" "\n",
    cin >>n;

    int num[n];
    int impar[n];
    int j=0;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero entero" "\n";
        cin>>num[i];
        if (num[i] % 2 != 0)
        {
            impar[j]=num[i];
            j++;
        }
        
    }
    cout <<"El arreglo original es:" "\n";
    for (int i = 0; i < n; i++)
    {
        cout << num [i] << "\n";
    }
    cout << "El arreglo de impares es:" "\n";
    for (int k = 0; k < j; k++)
    {
        cout << impar[k] << "\n";

    }
    
    return 0;
    
}