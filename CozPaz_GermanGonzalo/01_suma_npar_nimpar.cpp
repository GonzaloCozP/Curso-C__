/*Escribir un programa que calcule la suma de los números 
pares e impares de un arreglo de enteros.*/
#include <iostream>
using namespace std;
int main(){
    //se delcaran variables
    int n1 ,n2;
    int suma;
    int res;
    cout<<"Ingrese el primer valor par o impar"<<endl;
    cin>>n1;
    cout<<"Ingrese segundo valor par o impar"<<endl;
    cin>>n2;
    /* se usa la funcion "res para hallar el valor del a suma"*/
    res = n1 +n2;
    cout<<"El resultado es:"<<endl<<res<<endl;
    return 0;
}