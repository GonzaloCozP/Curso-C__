//Escriba un programa que simule una calculadora con funciones básicasde suma, resta, divisióny multiplicación,  el usuario deberáescoger que operaciónva a realizar
#include <iostream>
using namespace std;
//se da trabajo a las funciones definidas "suma,resta,multiplicacion,division"
int suma(int num1, int num2){
    int solucion = num1+num2;
    return solucion;
}
int resta(int num1, int num2){
    int solucion = num1-num2;
    return solucion;
}
int multiplicacion(int num1, int num2){
    int solucion = num1*num2;
    return solucion;
}
int division(int num1, int num2){
    int solucion = num1/num2;
    //division num1&num2
    return solucion;
}
int main(){
    cout<<" Elija la opcion: \n 1: Suma \n 2: Resta \n 3: Multiplicacion \n 4: Division "<<endl;
    int opcion;
    int valor1 =0, valor2 =0, res =0; //se inicializa las variables para el uso dentro de "switch"
    cin>>opcion;
    switch (opcion)
    {
    case 1: //operacion suma
        cout<<"Ingrese el primer valor:"<<endl;
        cin>>valor1;
        cout<<"Ingrese el segundo valor:"<<endl;
        cin>>valor2;
        cout<<"El resultado es:"<<endl;
        res=suma(valor1,valor2);
        cout<<res<<endl;
        break;
    case 2: //operacion resta
        cout<<"Ingrese el primer valor:"<<endl;
        cin>>valor1;
        cout<<"Ingrese el segundo valor:"<<endl;
        cin>>valor2;
        cout<<"El resultado es:"<<endl;
        res=resta(valor1,valor2);
        cout<<res<<endl;
        break;
    case 3: //operacion multiplicacion
        cout<<"Ingrese el primer valor:"<<endl;
        cin>>valor1;
        cout<<"Ingrese el segundo valor:"<<endl;
        cin>>valor2;
        cout<<"El resultado es:"<<endl;
        res=multiplicacion(valor1,valor2);
        cout<<res<<endl;
        break;
    case 4: //operacion division
        cout<<"Ingrese el primer valor:"<<endl;
        cin>>valor1;
        cout<<"Ingrese el segundo valor:"<<endl;
        cin>>valor2;
        cout<<"El resultado es:"<<endl;
        res=division(valor1,valor2);
        cout<<res<<endl;
        break;
    
    default:
    cout<<"Valor ingresado invalido";
        break;
    }
    return 0;
}