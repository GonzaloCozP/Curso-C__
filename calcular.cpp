#include <iostream>
using namespace std;

    int edad(int year);
    int edad(int year){
        int edad=0;
        edad=2023-year;
        return edad;
}
int main(){
    int año;
    int res;
    cout<<"hallar tu edad con el año de nacimiento"<<endl;
    cout<<"inserte año de nacimiento"<<endl;
    cin>>año;
    cout<<"Tu edad resultante es"<<endl;
    res=edad(año);
    if(res<=17){
        cout<<"eres ilegalisimo"<<endl;
    } else {
        cout<<"eres legalisimo"<<endl;
    }
    cout<<"tu edad es:"<<res;
    return 0;

}
