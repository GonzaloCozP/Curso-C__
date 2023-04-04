
/*Escriba un programa que solicite al usuario ingresar un número entero positivo 
y luego imprima la secuencia de números desde 1 hasta el número ingresado, pero 
reemplazando los múltiplos de 3 por la palabra "Fizz" y los múltiplos de 5 por la 
palabra "Buzz".Si el número es múltiplo tanto de 3 como de 5, imprimir "FizzBuzz"*/
#include <iostream>
using namespace std;
//se usa para saber si los numeros son multiplos uy se escribe dependiendo de lo que se solicita
void definir_multiplos(int tamaño,int numero[]){
    for(int i=0;i<tamaño;i++){ 
    if(numero[i]%3==0){
        if(numero[i]%5==0){
            cout<<"FizzBuzz"<<"\t";//si es multiplo de 3 y 5
        }else{
            cout<<"Fizz"<<"\t";//si es multiplo de 3
        }
    }else{
        if(numero[i]%5==0){
            cout<<"Buzz"<<"\t";//si es multiplo de 5
        }
        else{
            cout<<numero[i]<<"\t";//si no es multiplo de 3 y 5
        }
    }
    }
}
int main(){
    int numero_terminante;
    cout<<"escriba un numero entero positivo"<<endl;
    cin>>numero_terminante;//se pide hasta qeu numero vamos a escribir
    int numeros[numero_terminante];
    for(int i=0;i<numero_terminante;i++){
        numeros[i]=i+1;
    }//damos los valor al arreglo del 1 hasta el numero_terminate
    definir_multiplos(numero_terminante,numeros);//segun el numero dentro del arreglo se escribe una u otra 
    return 0;
}