#include <iostream>
using namespace std;
int main(){
    //se declara variables y se inicializa con arreglos
    string producto[5]={"televisor","monitor","celular","cargador","parlante"};
    producto[2]="computadora";//se cambia la posicion del arreglo por otra dentro de la cadena
    //se encuentra  el tamaño del arreglo y se coloca en la variable tamaño
    int tamaño= sizeof(producto)/sizeof(producto[0]);
    //se escribe cada posicion del arreglo con ayuda de "for"
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<"el producto["<<i<<"] = "<<producto[i];
    }
    return 0;
}