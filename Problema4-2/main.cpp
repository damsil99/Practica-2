#include <iostream>

using namespace std;

char numero_char[]="000000000000000";

int cont=0,parametro,j=0,aux=0,aux1=0;

int main(){
    cout<<"Ingrese numero: "<<endl;
    cin>>numero_char;

    cout<<endl<<"-> Arreglo de CHAR [";
    for(int i=0;i<numero_char[i];i++){
        cont++;
        cout<<numero_char[i];
    }
    cout<<"]"<<endl;

    int numero[cont];
    for(int i=0;i<numero_char[i];i++){
        if(numero_char[i]<58 && numero_char[i]>47){

            while(48<numero_char[i]){
                aux++;
                numero_char[i]--;}

            aux1=numero_char[i]-aux;
            parametro=numero_char[i]-aux1;
            if(j<cont)
            {   numero[j]=parametro;
                j++;
                aux=0; }} }

    cout<<"-> Arreglo de INT  [";
    for(int j=0;j<cont;j++){
        cout<<numero[j];}

    cout<<"]"<<endl<<endl;

    return 0;

}
