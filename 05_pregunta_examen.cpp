/*Escriba un programa que simule una calculadora con funciones básicas 
de suma, resta, división y multiplicación,  el usuario deberá 
escoger que operación va a realizar*/
#include <iostream>
using namespace std;
//se usa para sumar dos numeros
void suma(float numero_1,float numero_2){
    float suma=0;
    suma=numero_1+numero_2;//se suman los dos numero y se coloca en la variable suma
    cout<<"la suma de los dos numeros es: "<<suma<<endl;
}
//se usa para restar dos numero
void resta(float numero_1,float numero_2){
    float resta=0;
    resta=numero_1-numero_2;//en la resta se colocan los dos nuemros y definide con esta funcion
    cout<<"la resta de los dos numeros es: "<<resta<<endl;
}
//se usa para la multiplicacion de dos numero
void multiplicacion(float numero_1,float numero_2){
    float multiplicacion=0;
    multiplicacion=numero_1*numero_2;//en la multiplicacion se colocan los dos nuemros y definide con esta funcion
    cout<<"la multiplicacion de los dos numeros es: "<<multiplicacion<<endl;
}
//se usa para dividir dos numero
void division(float dividendo,float divisor){
    float division=0;
    if(divisor==0){//se usa para averiguar el divisor en caso sea cero
        cout<<"no se puede dividir entre cero"<<endl;//si es cero es indivisible
    }else{
        division=dividendo/divisor;
        cout<<"la division es: "<<division<<endl;//se hace la division y se escribe
    }
}
int main(){
    float numero_1,numero_2;
    char operador;
    //se pide los numeros y el operador
    cout<<"escriba un numero"<<endl;
    cin>>numero_1;
    cout<<"escriba un operador ( + , - , * , /)"<<endl;
    cin>>operador;
    cout<<"escriba otro numero"<<endl;
    cin>>numero_2;
    //dependiendo del operador se llama a su funcion correspondiendte
    switch(operador){
        case '+':
        suma(numero_1,numero_2);
        break;
        case '-':
        resta(numero_1,numero_2);
        break;
        case '*':
        multiplicacion(numero_1,numero_2);
        break;
        case '/':
        division(numero_1,numero_2);
        break;
        default:
        //se muestra un mensaje al no elegir un operador valido
        cout<<"no eligio un operador por defecto";
        break;
    }
    return 0;
}