
//Escribir un programa que calcule la suma de los números pares e impares de un arreglo de enteros.
#include <iostream>
using namespace std;
//esta funcion permite sumas los numeros pares 
int suma_par(int tamaño,int numero[10]){
    int suma_par=0;
    for(int i=0;i<tamaño;i++){
        if(numero[i]%2==0){//al ser el resultado el numero 0 se sabe que es par, despues se suma ese numero y se guarda en una variable nueva 
            suma_par=suma_par+numero[i];
        }
    }
    return suma_par;
}
//esto suma los numeros impares 
int suma_impar(int tamaño,int numero[10]){
    int suma_impar=0;
    for(int i=0;i<tamaño;i++){
        if(numero[i]%2==1){//si el resultado es 1 se sabe que es impar, despues se suma el numero y lo guarda en una variable nueva
            suma_impar=suma_impar+numero[i];
        }
    }
    return suma_impar;
}
int main(){
    int numeros[10];
    int tamaño=sizeof(numeros)/sizeof(numeros[0]);
    //se recorre el arreglo para que se coloque los numeros 
    for(int i=0;i<tamaño;i++){
        cin>>numeros[i];
    }
    //se escriben las funciones suma_par y suma_impar
    cout<<"la suma de numeros pares es: "<<suma_par(tamaño,numeros)<<endl;
    cout<<"la suma de numeros impares es: "<<suma_impar(tamaño,numeros)<<endl;
    return 0;
}