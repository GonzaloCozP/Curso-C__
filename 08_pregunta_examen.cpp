//escriba un programa que solicite el ingreso de 3 notas al usuario, y luego que calcule el promedio de las notas
#include <iostream>
using namespace std;
//su utilidad es para saber el promedio de las notas
float promedio_notas(float tamaño,float notas[3]){
    float promedio=0;
    promedio=(notas[0]+notas[1]+notas[2])/tamaño;//se suman las notas y se dividen entre la cantidad de notas que sean
    return promedio;
}
int main(){
    float notas[3];//se crea el arreglo para la cantidad de notas
    float tamaño=sizeof(notas)/sizeof(notas[0]);//se usa para saber cual es la cantidad de notas
    cout<<"escriba las notas"<<endl;
    for(int i=0;i<tamaño;i++){//se repasa para que el usuario escirba las notas
        cin>>notas[i];
    }
    cout<<"su promedio final de sus notas es: "<<promedio_notas(tamaño,notas)<<endl;
    return 0;
}