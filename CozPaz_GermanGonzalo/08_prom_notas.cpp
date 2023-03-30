//Escriba un programa que solicite el ingreso de 3 notas al usuario, y luego que calcule el promedio de las notas
#include <iostream>
using namespace std;
//difnimos 3 variables "n1,n2,n3" para el uso de "prom", mediente esto poder definir el calculo que realizaria la variable "prom"
int prom(int n1, int n2, int n3);
int prom(int n1, int n2, int n3){
    int prom =0;
    prom = (n1+n2+n3)/3;
    return prom;
}
int main(){
    //se declaran 3 variables para las notas
   int n1;
   int n2;
   int n3;
   int res;
   cout<<"Hallar el promedio de las 3 notas"<<endl;
   cout<<"inserte la primera nota:"<<endl;
   cin>>n1;
   cout<<"inserte la segunda nota:"<<endl;
   cin>>n2;
   cout<<"inserte la tercera nota:"<<endl;
   cin>>n3;
   cout<<"El promedio de las 3 notas es:"<<endl;
   res=prom(n1,n2,n3); //habiendo definido la variable "prom" esta dara el promedio de las 3 notas
   cout<<res<<endl;
   return 0;
}