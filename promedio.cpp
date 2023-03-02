#include <iostream>
using namespace std;
int prom (int n1, int n2, int n3);
int prom (int n1, int n2, int n3){
    double prom=0;
    prom=(n1+n2+n3)/3;
    return prom;
}
int notas(int calcula){
    int nota=0;
    if (calcula>=18){
            nota=1;
    }else{
        if (calcula>15){
            nota=2;
    }else{
        if (calcula>11){
            nota=3;

    }else{
        if (calcula>5){
            nota=4;

    }else{
        nota=5;
    }
    }
    }
    }
return nota;
}
int main(){
    int nota;
    int n1;
    int n2;
    int n3;
    int res;
    cout<<"Promedio de notas"<<endl;
    cout<<"Inserte nota 1"<<endl;
    cin>>n1;
    cout<<"inserte nota 2"<<endl;
    cin>>n2;
    cout<<"inserte nota 3"<<endl;
    cin>>n3;
    cout<<"La Respuesta es:"<<endl;
    res = prom (n1,n2,n3);
    nota=notas(res);
    switch(nota){
        case 1: 
        cout<<"A";
        break;
        case 2: 
        cout<<"B";
        break;
        case 3: 
        cout<<"C";
        break;
        case 4: 
        cout<<"F";
        break;
        case 5: 
        cout<<"G";
        break;
        default:
        cout<<"Valor invorrecto";
        break;
    }
    return 0;
}
