#include <iostream>
#include <stdlib.h>
/*El programa lo que debe dde hacer es separar los caracteres de los numeros,
 lo que se hace son tres arreglos, don uno sera el original, y los otros dos
 seran los que almacenaran los valores segun correspondan*/
using namespace std;

int main()
{

    /* Se iniciaron los arreglos con unos ceros como iniciados, para que el programa no tuviera
     errores*/
    char palabra[]= "000000000000000", palabra_sepda[]="000000000000000000",numeros_sepdo[]="000000000000000000";
    int contN=0, contL=0,k=0,j=0;

    cout << "-> Ingrese palabra" << endl;
    cin>>palabra;


    /*Este ciclo es el que recorre el arreglo original y lo compara entre el rango de los numero
     tipos CHAR de la tabla ASCII, si coinciden, el entra y ese numero lo almacena en el arregle de numeros
     donde [j] estara dentro de un condicional para hacer el papel de la posicion del arreglo*/
    for(int i=0; i<palabra[i];i++){

     if(palabra[i]>47 && palabra[i]<58)
             {contN++;

             if(j<=contN)
                 {numeros_sepdo[j]=palabra[i];
                    j++;}  }

     /*De lo contrario, si el numero no esta en el rango, realizara lo mismo que en el punto anterior
      almacenara en el arreglo de los caracteres, y la [k] sera la que haha el papel de posicion
      para el arreglo de caracteres*/
     else
             {contL++;

             if (k<=contL)
             {palabra_sepda[k]=palabra[i];
               k++;
              }  }  }


    /*Por ultimo el ciclo que me imprimira los arreglos con los numeros o
     caracteres ya separados, los contadores son la cantidad de caracteres o
     numeros que se ingresaron*/

    cout<<endl<<"-> Arreglo de numeros [";
    for(int j=0;j!=contN;j++)
    {cout<<numeros_sepdo[j];}
    cout<<"]"<<endl<<"-> Arreglo de palabras [";


    for(int k=0;k<contL;k++)
    {cout<<palabra_sepda[k];}
    cout<<"]"<<endl;


cout<<endl<<"-> Se ingresaron ["<<contN<<"] numeros "<<endl<<"-> Se ingresaron ["<<contL<<"] letras"<<endl<<endl;



    return 0;

}
