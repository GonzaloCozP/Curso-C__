#include <iostream>
using namespace std;

    int edad(int year);
    int edad(int year){
        int edad=0;
        edad=2023-year;
        return edad;
}
int main(){
    //se define las variables
    int año;
    int res;
    cout<<"hallar tu edad con el año de nacimiento"<<endl;
    cout<<"inserte año de nacimiento"<<endl; //solicita le ingreso de edad
    cin>>año; //la funcion "cin" inicializa la variable año
    cout<<"Tu edad resultante es"<<endl;
    res=edad(año); //esta funcion da el resultado de tu edad actual despues de haber colocado el año de nacimiento
    if(res<=17){
        //dependiendo de si el resultado es menor o igual a 17 se declara como menor de edad
        cout<<"eres menor de edad"<<endl;
    } else {
        //en caso de ser falso se declara como mayor de edad
        cout<<"eres mayor de edad"<<endl;
    }
    cout<<"tu edad es:"<<res; 
    return 0;

}