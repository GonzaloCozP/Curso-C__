#include <iostream>
using namespace std;
int main(){
    //se declaran arrelgos productos y precio que tendran igual tamaño
    string productos[5];
    int precio[5];
    //obtener le tamaño de un arreglo
    int tamaño= sizeof(productos)/sizeof(productos[0]);
    //se utiliza el "for" para recorrer por estos arreglos
    for(int i=0;i<tamaño;i++){
        //otorgando instrucciones para el usuario
        cout<<"agrega el producto ";
        //el usario escribe el producto en la pocicion i
        cin>>productos[i];
        cout<<"poner el precio al producto "<<productos[i]<<" ";
        //el usario escribe el precio en la pocicion i
        cin>>precio[i];
    }
    //con "for" se escribe el producto y el precio que le corresponde
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<productos[i]<<" = "<<precio[i];
    }
    cout<<"el tamaño maximo del arreglo es "<<tamaño;
    cout<<"el tamaño maximo del indice del arreglo es "<<tamaño-1;
    return 0;
}