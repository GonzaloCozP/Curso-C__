#include <iostream>
using namespace std;
int main(){
    //se delcaran 3 variables para este caso
    int num;
    int res;
    int *p;
    cout<<"Escribir un numero";
    cin>>num; //funcion que inicializa la variable "num"
    res=num%2; //el residuo de la variable num que se divide en 2 puede ser 1 o 0 y se le da este valor
    if(res==1){
        cout<<num<<" es impar\n";
    } else {
        cout<<num<<"es par\n";
    }
    //le damos la direcion de memoria de num a puntero
    p=&num;
    cout<<"su direccio nde memoria es"<<p;
    return 0;
}