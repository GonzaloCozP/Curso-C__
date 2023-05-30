/*Elaborar un ejercicio
elabore un clase denominada cuadrilátero, implemente sus atributos y métodos
resuelva las siguiente interrogantes

--> declarar 3 objetos de tipo cuadrado
   modifique los lados de 2 objetos
   realice la sumatoria de los lados por objeto y el total
   realice el calculo del area y perimetro de cada objeto
   calcule la sumatoria de las areas de todos lo objeto
  calcule la sumatoria del perimetro de todos los objetos*/
#include <iostream>
using namespace std;

class Cuadrilatero {
private:
    int lado[2];
public:
    // Constructor de la clase Cuadrilatero
    Cuadrilatero(int lado1, int lado2) {
        lado[0] = lado1;
        lado[1] = lado2;
    }

    // Métodos para obtener y establecer los lados del cuadrilátero
    int getLado(int index) {
        return lado[index];
    }

    void setLado(int index, int valor) {
        lado[index] = valor;
    }

    // Método para obtener la suma de los lados
    int getSumaLados() {
        return lado[0] + lado[1];
    }

    // Método para obtener el perímetro del cuadrilátero
    int getPerimetro() {
        return 2 * getSumaLados();
    }

    // Método para obtener el área del cuadrilátero
    int getArea() {
        return lado[0] * lado[1];
    }
};

int main() {
    // Crear objetos Cuadrilatero con diferentes lados
    Cuadrilatero cuadrados[3] = {
        Cuadrilatero(9, 9),
        Cuadrilatero(12, 12),
        Cuadrilatero(15, 15)
    };

    // Modificar lados del cuadrado 2 y 3
    cuadrados[1].setLado(0, 10);
    cuadrados[1].setLado(1, 11);
    cuadrados[2].setLado(0, 18);
    cuadrados[2].setLado(1, 25);

    int sumaLadosTotal = 0;
    int perimetroTotal = 0;
    int areaTotal = 0;

    // Calcular la suma de los lados, perímetros y áreas de los cuadrados
    for (int i = 0; i < 3; i++) {
        sumaLadosTotal += cuadrados[i].getSumaLados();
        perimetroTotal += cuadrados[i].getPerimetro();
        areaTotal += cuadrados[i].getArea();

        // Imprimir la suma de los lados, el perímetro y el área de cada cuadrado
        cout << "La suma de los 2 lados del cuadrado " << (i + 1) << " es: " << cuadrados[i].getSumaLados() << "\n";
        cout << "El perimetro del cuadrado " << (i + 1) << " es: " << cuadrados[i].getPerimetro() << "\n";
        cout << "El area del cuadrado " << (i + 1) << " es: " << cuadrados[i].getArea() << "\n";
    }

    // Imprimir la suma total de los lados, perímetros y áreas de los cuadrados
    cout << "La suma de los 2 lados de los 3 cuadrados es: " << sumaLadosTotal << "\n";
    cout << "La suma de los perimetros de los 3 cuadrados es: " << perimetroTotal << "\n";
    cout << "La suma de las areas de los tres cuadrados es: " << areaTotal << "\n";

    return 0;
}