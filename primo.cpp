#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    int num;
    int *p;
    bool es_primo=true;
    num=53;
    for(a=2;a<= sqrt(num);a++){
        if(num%a==0){
            es_primo=false;
            break;
        }
    }
    if(es_primo){
        cout<<num<<" es primo"<<endl;
    }else{
        cout<<num<<" no es primo"<<endl;
    }
    p=&num;
    cout<<p;
    return 0;
}