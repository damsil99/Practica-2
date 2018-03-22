#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char palabra[]= "000000000000000", palabra_sepda[]="000000000000000000",numeros_sepdo[]="000000000000000000";
    int contN=0, contL=0,k=0,j=0;

    cout << "-> Ingrese palabra" << endl;
    cin>>palabra;

    for(int i=0; i<palabra[i];i++){

     if(palabra[i]>47 && palabra[i]<58)
             {contN++;

             if(j<=contN)
                 {numeros_sepdo[j]=palabra[i];
                    j++;}  }

     else
             {contL++;

             if (k<=contL)
             {palabra_sepda[k]=palabra[i];
               k++;
              }  }  }


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
