#include <iostream>
/*El programa lo que hace en si es pedirle al usuario el tamaño del cuadro
 lo especial es que el metodo de operacion para encontrar los caminos de llegada, es
 una combinacion*/

using namespace std;

double numero,aux=0, contador=1,aux1=1,aux2=1, aux3=0;

int main()
{
    cout << "-> Ingrese numero para crear cuadricula (nxn)" << endl;
    cin>>numero;


    /*El numero se le suma el mismo para que sea el [n] de la combinacion*/

    aux=numero+numero;

    /*Esta comparacion es con el fin de realizar el factorial de [n] (aux)
     y reducir terminos para que los numeros no queden tan grandes*/
    while(aux>numero)
      {   aux1=aux*aux1;
          aux--; }

    /*El contador es para realizar el factorial a [k] para luego hacer la
     respectiva division y me arroge la cantidad de formas de llegada*/
    contador=1;
    while(contador<=numero)
    {   aux2=contador*aux2;
        contador++;      }

    aux3=aux1/(aux2);

    cout<<"-> Las formas de llegar de un lado a otro, \n   solo bajando y derecha es de:  ["<<aux3<<"]"<<endl<<endl<<endl;


    return 0;
}
