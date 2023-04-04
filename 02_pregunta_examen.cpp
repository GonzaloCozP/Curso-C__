
//Escribir un programa para calcule el área de un triángulo y el perímetro de un triangulo
#include <iostream>
#include <cmath>//se usa para sacar la raiz
using namespace std;
//se usa para hallar el area del triangulo
int area_triangulo(int base,int altura){
    int area=0;
    //depende de lso datos que se saca del area
    area=(base*altura)/2;
    return area;
}
//se usa para hallar el perimetro
int perimetro_triangulo(int base,int altura){
    int perimetro=0;
    //se suman los catetos y la hipotenusa, para sacar la hipotenusa se usa pitagoras
    perimetro=base+ altura+sqrt((base*base)+(altura*altura));
    return perimetro;
}
int main(){
    int base,altura;
    //se solicita le ingreso de datos como la base y la altura dle triangulo
    cout<<"ingrese la base del triangulo"<<endl;
    cin>>base;
    cout<<"ingrese la altura del triangulo"<<endl;
    cin>>altura;
    //se llaman a dos funciones las cuales osn area_triangulo y perimetro_triangulo
    cout<<"el area del triangulo es: "<<area_triangulo(base,altura)<<endl;
    cout<<"el perimetro del triangulo es: "<<perimetro_triangulo(base,altura)<<endl;
    return 0;
}