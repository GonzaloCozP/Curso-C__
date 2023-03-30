#include <iostream>
using namespace std;
int main(){
    //se declara un arreglo llamado "libros"
    string libros[5];
    //se busca el tamaño del arreglo y se ubica dentro de la variable tamaño
    int tamaño= sizeof(libros)/sizeof(libros[0]);
    //se creo una funcion "for" que recorre de la posicion inicial hasta el tamaño del arreglo con salto de 1
    for(int i=0;i<tamaño;i++){
        //se le otorga instrucciones al usuario
        cout<<"\n"<<"ingrese el producto["<<i<<"]";
        //el usuario pone el libro que quiera las veces que dure el bucle "for"
        cin>>libros[i];
    }
    //con el "for" se escriben todos los datos del arreglo 
    for(int i=0;i<tamaño;i++){
        cout<<"\n"<<"el producto["<<i<<"] = "<<libros[i];
    }
    return 0;
}