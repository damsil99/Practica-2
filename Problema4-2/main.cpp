#include <iostream>
/*Cuando el usuario me ingrese un numero, este sera de tipo CHAR,
 lo que el programa hace es tomar el rango de los numeros CHAR en la tabla ASCII
 y realizarle operaciones de suma y resta con ayuda de variables*/
using namespace std;

char numero_char[]="000000000000000";

int cont=0,parametro,j=0,aux=0,aux1=0;

int main(){
    cout<<"Ingrese numero: "<<endl;
    cin>>numero_char;

    /*ESte ciclo es para determinar la cantidad de elemntos que hay en el arreglo
     y asu vez imprimirlos como CHAR*/

    cout<<endl<<"-> Arreglo de CHAR [";
    for(int i=0;i<numero_char[i];i++){
        cont++;
        cout<<numero_char[i];
    }
    cout<<"]"<<endl;

    /*Se crea un arreglo de tipo INT, que va a ser donde se almacenen los numeros INT
     y el (cont) sera el tamaño del arreglo*/
    int numero[cont];
    for(int i=0;i<numero_char[i];i++){
        if(numero_char[i]<58 && numero_char[i]>47){

            /*Este ciclo lo que hace es determinar un aux, que sera el que le restara
            al numero de CHAR en ASCII*/
            while(48<numero_char[i]){
                aux++;
                numero_char[i]--;}

            /*El aux1 va a ser el numero que se le va a restar al original para luego
             dar el numero [INT] en ASCII*/
            aux1=numero_char[i]-aux;
            parametro=numero_char[i]-aux1;//EL numero entero se almacena en una variable del mismo tipo
            if(j<cont)
            {   numero[j]=parametro;//Este numero se almacenara en el arreglo y [j] sumara para añadir en una nueva posicion
                j++;
                aux=0; }} }

    cout<<"-> Arreglo de INT  [";
    for(int j=0;j<cont;j++){
        cout<<numero[j];}                //Imprime lo numeros del arreglo que ya son INT

    cout<<"]"<<endl<<endl;

    return 0;

}
