// Escribir un programa que solicite al usuario un arreglo y luego ordene el arreglo de mayor a menor y de menor a mayor
#include <iostream>
using namespace std;
int main(){
    //declaramos las variable y/o arreglos
    int num[5];
    int ordenar[5];
    int tamaño= sizeof(num)/sizeof(num[0]);
    //el usuario pone los numeros
    cout<<"Ingrese 5 valores positivos"<<endl;
    for(int i =0;i<tamaño;i++){
        cin>>num[i];
    }
    int menor;
    for(int i=0;i<tamaño-1;i++){
        //al ser menor seencuentra en el bucle
        menor=num[i];
        for(int j=i+1;j<tamaño;j++){
            //al ser menor la variable por eso se empieza en i + 1
            if(menor>num[j]){
                menor=num[j];
                ordenar[i]=num[j];
                num[j]=num[i];
                num[i]=ordenar[i];
            }
        }
    }
    
    cout<<"numeros ordenados de menor a mayor: ";
    for(int i=0;i<tamaño;i++){
        cout<<num[i]<<"; ";
    }
    //escribimos el arreglo del tamaño - 1 al 0
    cout<<"\n"<<"numeros ordenados de mayor a menor son: ";
    for(int i=tamaño-1;i>-1;i=i-1){
        cout<<num[i]<<"; ";
    }
    return 0;
}