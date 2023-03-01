#include <iostream>
using namespace std;
double prom (double n1, double n2, double n3);
double prom (double n1, double n2, double n3){
    double prom=0;
    prom=(n1+n2+n3)/3;
    return prom;
}
int main(){
    double n1;
    double n2;
    double n3;
    double res;
    cout<<"Promedio de notas"<<endl;
    cout<<"Inserte nota 1"<<endl;
    cin>>n1;
    cout<<"inserte nota 2"<<endl;
    cin>>n2;
    cout<<"inserte nota 3"<<endl;
    cin>>n3;
    cout<<"La Respuesta es:"<<endl;
    res = prom (n1,n2,n3);
    
    if(res<=10.5){
        cout<< res<<endl <<"Desaprobaste"<<endl;
        } else {
            cout<< res<<endl <<"Aprobaste"<<endl;

        }

    return 0;
}