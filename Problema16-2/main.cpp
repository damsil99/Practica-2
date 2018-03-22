#include <iostream>

using namespace std;

double numero,aux=0, contador=1,aux1=1,aux2=1, aux3=0;

int main()
{
    cout << "-> Ingrese numero para crear cuadricula (nxn)" << endl;
    cin>>numero;

    aux=numero+numero;

    while(aux>numero)
      {   aux1=aux*aux1;
          aux--; }


    contador=1;
    while(contador<=numero)
    {   aux2=contador*aux2;
        contador++;      }

    aux3=aux1/(aux2);

    cout<<"-> Las formas de llegar de un lado a otro, \n   solo bajando y derecha es de:  ["<<aux3<<"]"<<endl<<endl<<endl;


    return 0;
}
