#include <iostream>

/*El cuadro magico, lo que se realiza en este programa es establecer unos valores
 fijos, los de la cantidad del cuadro, donde no se puedan repetir los numeros... cuando se
 hallan ingresado todos los numeros, el programa realiza sumas de posicion para compararlas entre si
 y si son iguales, los numeros ingresados forman el cuadro magico*/



using namespace std;

int numeros[3][3],filas=2, columnas=2,aux=0,aux1=0;

int main()
{

   /*1*/ cout<<"Ingrese numero: [0][0]"<<endl;
  cin>>numeros[0][0];
    cout<<"Ingrese numero: [0][1]"<<endl;
  /*2*/ cin>>numeros[0][1];
    while(numeros[0][1]==numeros[0][0]){
      cout<<"No se pueden repetir numeros:"<<endl<<"Ingrese numero de nuevo:"<<endl;
      cin>>numeros[0][1];
    }
    cout<<"Ingrese numero: [0][2]"<<endl;
   /*3*/ cin>>numeros[0][2];
    while (numeros[0][2]==numeros[0][1] || numeros[0][2]==numeros[0][0]){
       cout<<"No se pueden repetir numeros:"<<endl<<"Ingrese numero de nuevo:"<<endl;
       cin>>numeros[0][2];
    }
    cout<<"Ingrese numero: [1][0]"<<endl;
    /*4*/cin>>numeros[1][0];
    while (numeros[1][0]==numeros[0][0] || numeros[1][0]==numeros[0][1]
        || numeros[1][0]==numeros[0][2]){
        cout<<"No se pueden repetir numeros:"<<endl<<"Ingrese numero de nuevo:"<<endl;
        cin>>numeros[1][0];
    }
    cout<<"Ingrese numero: [1][1]"<<endl;
   /*5*/ cin>>numeros[1][1];
    while (numeros[1][1]==numeros[0][0] || numeros[1][1]==numeros[0][1]
        || numeros[1][1]==numeros[0][2] || numeros[1][1]==numeros[1][0]){
        cout<<"No se pueden repetir numeros:"<<endl<<"Ingrese numero de nuevo:"<<endl;
        cin>>numeros[1][1];
    }
    cout<<"Ingrese numero: [1][2]"<<endl;
   /*6*/ cin>>numeros[1][2];
    while (numeros[1][2]==numeros[0][0] || numeros[1][2]==numeros[0][1]
        || numeros[1][2]==numeros[0][2] || numeros[1][2]==numeros[1][0]
        || numeros[1][2]==numeros[1][1] ){
        cout<<"No se pueden repetir numeros:"<<endl<<"Ingrese numero de nuevo:"<<endl;
        cin>>numeros[1][2];
    }
    cout<<"Ingrese numero: [2][0]"<<endl;
  /*7*/  cin>>numeros[2][0];
    while (numeros[2][0]==numeros[0][0]
        || numeros[2][0]==numeros[0][1] || numeros[2][0]==numeros[0][2]
        || numeros[2][0]==numeros[1][0] || numeros[2][0]==numeros[1][1]
        || numeros[2][0]==numeros[1][2] ){
        cout<<"No se pueden repetir numeros:"<<endl<<"Ingrese numero de nuevo:"<<endl;
        cin>>numeros[2][0];
    }
    cout<<"Ingrese numero: [2][1]"<<endl;
    /*8*/cin>>numeros[2][1];
    while (numeros[2][1]==numeros[0][0] || numeros[2][1]==numeros[0][1]
        || numeros[2][1]==numeros[0][2] || numeros[2][1]==numeros[1][0]
        || numeros[2][1]==numeros[1][1] || numeros[2][1]==numeros[1][2]
        || numeros[2][1]==numeros[2][0] ){
        cout<<"No se pueden repetir numeros:"<<endl<<"Ingrese numero de nuevo:"<<endl;
        cin>>numeros[2][1];
    }
    cout<<"Ingrese numero: [2][2]"<<endl;
   /*9*/ cin>>numeros[2][2];
    while (numeros[2][2]==numeros[0][0] || numeros[2][2]==numeros[0][1]
        || numeros[2][2]==numeros[0][2] || numeros[2][2]==numeros[1][0]
        || numeros[2][2]==numeros[1][1] || numeros[2][2]==numeros[1][2]
        || numeros[2][2]==numeros[2][0] || numeros[2][2]==numeros[2][1] ){
        cout<<"No se pueden repetir numeros:"<<endl<<"Ingrese numero de nuevo:"<<endl;
        cin>>numeros[2][2];
    }

    for(int i=0;i<=filas;i++){     //Imprime los valores de la matriz
        for(int j=0;j<=columnas;j++){
            cout<<"Ingrese numero ["<<i<<"]["<<j<<"]: "<<numeros[i][j]<<endl;
            }
    }


    aux=numeros[0][0]+numeros[1][1]+numeros[2][2]; //Suma las posiciones de la diagonal


   /*Este ciclo recorre toda la mtriz luego realiza operaciones basicas
    para comprar con le resultado de la diagonal*/

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            aux1+=numeros[i][j];

        }
    }
    aux1=aux1/3;
    if(aux==aux1){
        aux1=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
             aux1+=numeros[j][i];
            }
        }
        aux1=aux1/3;
        if(aux==aux1){
            cout<<endl<<"[Los numeros ingresados FORMAN el cuadrado magico]"<<endl<<endl;
        }
    }
    else{
        cout<<endl<<"[Los numeros ingresados NO forman el cuadrado magico]"<<endl<<endl;
    }

    return 0;
}
