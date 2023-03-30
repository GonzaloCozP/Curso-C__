//Escribir un programa que calcule el área de un triángulo, el perímetro de un triangulo
#include <iostream>
using namespace std;
int per (int a, int b, int c){
    int per = 0; //se inciializa la variable "per"
    per = a + b + c;
    return per;
}
int area (int a, int b){
    int area = 0; /* se incializa la variable "area" y se crea la operacion que se desea realizar*/
    area = a*b/2;
    return area;
}
int main(){
    //se delcaran varaibles para la suma de sus 3 lados
    int lado1;
    int lado2;
    int lado3;
    int resp;
    cout<<"Hallar el perimetro de un triangulo"<<endl;
    cout<<"Insertar el primer lado"<<endl;
    cin>>lado1;
    cout<<"Inserta el segundo lado"<<endl;
    cin>>lado2;
    cout<<"Inserte el tercer lado"<<endl;
    cin>>lado3;
    cout<<"La respuesta es:"<<endl;
    resp=per(lado1,lado2,lado3); //se realiza le calculo que se establecio en la variable "per"
    cout<<resp<<endl;

    /*se declaran variables*/
    int base;
    int altura;
    int res;
    cout<<"Hallar el area de un triangulo"<<endl;
    cout<<"Inserte la base del triangulo"<<endl;
    cin>>base;
    cout<<"inserte la altura del triangulo"<<endl;
    cin>>altura;
    cout<<"El resultado es:"<<endl;
    res=area(base,altura); //la funcion "res" realiza el calculo que se estalecio en la variable "area"
    cout<<res<<endl;
    return 0;

}