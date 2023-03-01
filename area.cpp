#include <iostream>
using namespace std;
int area (int a, int b);
int area (int a, int b){
    int area = 0;
    area = a*b;
    return area;
}
int main(){
    int an;
    int al;
    int res;
    cout<<" Hallar le area del rectangulo "<<endl;
    cout<<" Introduzca el ancho del rectangulo "<<endl;
    cin>>an;
    cout<<" Introduzca la altura del rectangulo"<<endl;
    cin>>al;
    cout<<" El resultado es: "<<endl;
    res=area(an,al);
    cout<<res;
    return 0;
}