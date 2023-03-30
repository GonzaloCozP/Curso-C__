#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //se delcaran variables 
    int i;
    int num;
    int *p;
    bool es_primo=true;
    cout<<"Ingrese un numero entero: ";
    cin>>num;
    /* se prueban los posibles divisores desde 2 hasta la raíz cuadrada del número,
   ya que si hay un divisor que se mayor al su raiz cuadrada significa
    que hay otro divisor mas pequeño y solo se saca prueba los numeros menores 
    de su raiz cuadrada*/
    for(i=2;i<= sqrt(num);i++){
        //si el resto de la variable num es igual a 0 no es primo
        if(num%i==0){
            es_primo=false;
            break;
        }
    }
    //esta ondicinal permite escribir si es primo o no es primo
    if(es_primo){
        cout<<num<<" es primo"<<endl;
    } else {
        cout<<num<<" no es primo"<<endl;
    }
    //se coloca el punto en "num"
    p=&num;
    //Se define le espacio de memoria
    cout<<p;
    return 0;
}