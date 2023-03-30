#include <iostream>
using namespace std;

 int main(){
   string as;
   // Se declaran variables para la digitacion de las mismas
    int n1;
    int n2;
    int op;
    int res;
    //funcion "cin" inicializa las variables ya antes declaradas "n1,n2.op"
    cout<<"digite el primer numero"<<endl;
    cin>> n1;
    cout<<"digite el segundo numero"<<endl;
    cin>> n2;
    cout<<"ponga el numero del operador matematico correspodiente(1:+ ; 2:- ; 3:* ; 4:/)"<<endl;
    cin>> op;
    //de acuerdo al operador elegido se resolvera la operacion
    switch (op){
        case 1:
        res=n1+n2; break;
        case 2:
        res=n1-n2; break;
        case 3:
        res=n1*n2; break;
        case 4:
        //se define en la division que si el denominador es 0 la operacion envie un mensaje de error 
        if (n2==0) {
           op=2211;// defininmos un numero para que este de error 
           as = "no se puede definir"; break; 
		} else {
		   res=n1/n2; break;
		}
		break;
        res=n1/n2; break;
        default:
        op=2211; 
        as = "no eligio un operador valido"; break;
    }
    // si el es igual a 2211 y si es verdad sera un error, en caso de ser incorrecto este nos daria la respuesta
    if (op==2211){
      cout<<as<<endl;
    } else {
    cout<< "la respuesta es "<<res<<endl;
    }
    return 0;
 }
