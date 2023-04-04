
//Escribir un programa que solicite al usuario un arreglo y luego ordene el arreglo de mayor a menor y de menor a mayor
#include <iostream>
using namespace std;
//se usa para ordenar de menor a mayor 
void menor_a_mayor(int tamaño,int arreglo[10]){
    int menor=0;
    int guardar_numero=0;
    for(int i=0;i<tamaño;i++){//sirve para ubicar cada uno, quien es menor y cambiarlo de lugar
        menor=arreglo[i];
        for(int j=0;j<tamaño;j++){
           if(menor>arreglo[j]){//esta condicion permite saber si hay un numero menor
                menor=arreglo[j];//si cumple la condicion se cambia por un menro nuevo
                guardar_numero=arreglo[j];//guarda el numero menor
                arreglo[j]=arreglo[i];
                arreglo[i]=guardar_numero;//se remplaza el arreglo en la posicion i por el numero menor anteriormente guardado
            } 
        }
    }  
}
//funcion para ordenar de mayor a menor 
void mayor_a_menor(int tamaño,int arreglo[10]){
    int mayor=0;
    int guardar_numero=0;
    for(int i=0;i<tamaño;i++){
        mayor=arreglo[i];
        for(int j=0;j<tamaño;j++){
           if(mayor<arreglo[j]){//esta condicion permite saber si hay un numero mayor 
                mayor=arreglo[j];//si cumple la condicion remplazamos por el nuevo numero mayor 
                guardar_numero=arreglo[j];//guarda el numero mayor
                arreglo[j]=arreglo[i];
                arreglo[i]=guardar_numero;//se remplaza el arreglo en la posicion i por el numero menor anteriormente guardado
            } 
        }
    } 
}
//funcion escribe el arreglo
void dibujar_arreglo(int tamaño,int arreglo[10]){
    //recorre el arreglo para escribirlo
    for(int i=0;i<tamaño;i++){
        cout<<arreglo[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int arreglo[10];
    int tamaño=sizeof(arreglo)/sizeof(arreglo[0]);//el tamaño del arreglo
    //recorremos el arreglo pra que el usuario ponga los datos
    for(int i=0;i<tamaño;i++){
        cin>>arreglo[i];
    }
    //se llama a las funciones 
    cout<<"tu arreglo es el siguiente"<<"\t";
    dibujar_arreglo(tamaño,arreglo);
    cout<<"ordenamos de menor a mayor"<<"\t";
    menor_a_mayor(tamaño,arreglo);
    dibujar_arreglo(tamaño,arreglo);
    cout<<"ordenamos de mayor a menor"<<"\t";
    mayor_a_menor(tamaño,arreglo);
    dibujar_arreglo(tamaño,arreglo);
    return 0;
}