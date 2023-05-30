#include <iostream>
#include <string>
#include "17_herencia_murcielago.cpp"
using namespace std;

int main() {
    // Crear objetos de las clases Murcielago, Perro y Gato
    Murcielago aea("a", "b", 4, 5, true, true, false);
    Perro aea1(2, "b", 4, 5, true, true, false);
    Gato aea2("a", "b", 4, 5, true, true, false);

    // Modificar y obtener el valor del atributo 'familia' de la clase Murcielago
    aea.setFamiliaM("mamifero");
    cout << aea.getFamiliaM() << "\n";

    // Modificar y obtener el valor del atributo 'familia' de la clase Perro
    aea1.setFamiliaP("fgasa");
    cout << aea1.getFamiliaP() << "\n";

    // Modificar y obtener el valor del atributo 'familia' de la clase Gato
    aea2.setFamiliaG("hgtefw");
    cout << aea2.getFamiliaG() << "\n";

    return 0;
}