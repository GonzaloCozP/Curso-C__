
/*Escribir un programa que encuentre el número mayor, el número menor, 
el promedio, la media , la mediana , cual es el número que se repite 
más veces de un arreglo de enteros de 10 ítems*/
#include <iostream>
using namespace std;
//se usa para encontrar le numero menor
int menor(int tamaño,int arreglo[10]){
    int menor=arreglo[0];
        for(int i=0;i<tamaño;i++){
           if(menor>arreglo[i]){//busca el numero menor
                menor=arreglo[i];//se cumple se remplaza y se convierte en el nuevo numero menor
            }
        }  
    return menor;
}
//se usa para encontrar el numero mayor
int mayor(int tamaño,int arreglo[10]){
    int mayor=arreglo[0];
        for(int i=0;i<tamaño;i++){
           if(mayor<arreglo[i]){//busca el numero numero mayor 
                mayor=arreglo[i];//si se cumple se remplaza y se convierte en el numero mayor
            }
        }  
    return mayor;
}
//funcion para encontrar el promedio
int promedio(int tamaño,int arreglo[10]){
    int promedio=0;
    int suma=0;
        for(int i=0;i<tamaño;i++){
           suma=suma+arreglo[i];//se suma lso datos del arreglo
        }
        promedio=suma/tamaño;  //la suma se divide con el tamaño
    return promedio;//retornamos el valor final del promedio
}
//se usa para hallar media
int media(int tamaño,int arreglo[10]){
    int media=0;
    int veces_arreglo[10];
    int contar_veces=0;
    //con un for anidado para contar las veces que se repite
    for(int i=0;i<tamaño;i++){
        //inciamos en cero y se suma uno cuando se cuente a asi misma
        contar_veces=0;
        for(int y=0;y<tamaño;y++){ 
            //si encuentra un numero que se repita suma uno a la variable contar
            if(arreglo[i]==arreglo[y]){
                contar_veces=contar_veces+1;//al cumplirse se suma 1
            } else {
                contar_veces=contar_veces;//al no cumplirse queda igual
            } 
        }
        veces_arreglo[i]=contar_veces;//introduciomos la veces que se repite en un arreglo en otro arreglo con el mismo indice
    }
    int mayor=veces_arreglo[0];
    //se busca en el arreglo veces_arreglo el mayor numero, e imprimimos el indice del arreglo principal
        for(int i=0;i<tamaño;i++){
           if(mayor<veces_arreglo[i]){
                mayor=veces_arreglo[i];
                media=arreglo[i];
            }
        } 
    return media;
}
//se usa para hallar la mediana
void mediana(int tamaño,int arreglo[10]){
    int menor=0;
    int guardar_numero=0;
    //escribimos la media sin ordenar los datos
    cout<<"mediana del arreglo sin ordenar "<<arreglo[tamaño/2]<<endl;
    for(int i=0;i<tamaño;i++){
        menor=arreglo[i];
        for(int j=0;j<tamaño;j++){
           if(menor>arreglo[j]){
                menor=arreglo[j];//si cumple la condicion remplazamos por el nuevo numero menor 
                guardar_numero=arreglo[j];//se guarda el numero menor
                arreglo[j]=arreglo[i];
                arreglo[i]=guardar_numero;//se remplaza el arreglo en la posicion i por el numero menor guardado
            } 
        }
    }
    //hallamos la media ya hbaiendo ordenado los datos
    cout<<"mediana del arreglo ordenada "<<arreglo[tamaño/2]<<endl;  
}
int main(){
    int arreglo[10];
    int tamaño=sizeof(arreglo)/sizeof(arreglo[0]);//se halla el tamaño del arreglo
    //se usa para que el usuario ingrese los datos
    for(int i=0;i<tamaño;i++){
        cin>>arreglo[i];
    }
    //llamamos a todas las funciones
    cout<<"el numero menor es :"<<menor(tamaño,arreglo)<<endl;
    cout<<"el numero mayor es :"<<mayor(tamaño,arreglo)<<endl;
    cout<<"el numero promedio es :"<<promedio(tamaño,arreglo)<<endl;
    cout<<"la media es :"<<media(tamaño,arreglo)<<endl;
    mediana(tamaño,arreglo);
    return 0;
}