#include <iostream>
using namespace std;
//funcion area que pide 2 valores
int area (int a, int b);
int area (int a, int b){
    int area = 0; // se inicializa la variable area
    area = a*b;//se tutiliza para hallar el area "ancho por altura"
    return area;
}
int main(){
    //se delcara variables ancho, alto y respuesta
    int an;
    int al;
    int res;
    cout<<" Hallar le area del rectangulo "<<endl;
    cout<<" Introduzca el ancho del rectangulo "<<endl;
    cin>>an;
    cout<<" Introduzca la altura del rectangulo"<<endl;
    cin>>al;
    cout<<" El resultado es: "<<endl;
    res=area(an,al);//funcion usada para dar respuesta al area
    cout<<res;//se escribe la respuesta
    return 0;
}