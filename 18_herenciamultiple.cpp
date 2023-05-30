#include <iostream>
#include <string>
#include "17_class_animal.cpp"

using namespace std;

// Clase Murcielago que hereda de la clase Animal
class Murcielago : public Animal {
private:
    string nombre;
public:
    // Constructor de la clase Murcielago
    Murcielago(string _nombre, string _familia, int _patas, int _dientes, bool _ojos, bool _orejas, bool _cola)
        : Animal(_familia, _patas, _dientes, _ojos, _orejas, _cola) {
        nombre = _nombre;
    }

    string getFamiliaM() {
        return familia; // Accediendo al atributo protegido 'familia' heredado de la clase Animal
    }

    void setFamiliaM(string _familiaM) {
        familia = _familiaM; // Modificando el atributo protegido 'familia' heredado de la clase Animal
    }
};

// Clase Perro que hereda de la clase Animal
class Perro : public Animal {
private:
    int edad;
public:
    // Constructor de la clase Perro
    Perro(int _edad, string _familia, int _patas, int _dientes, bool _ojos, bool _orejas, bool _cola)
        : Animal(_familia, _patas, _dientes, _ojos, _orejas, _cola) {
        edad = _edad;
    }

    string getFamiliaP() {
        return familia; // Accediendo al atributo protegido 'familia' heredado de la clase Animal
    }

    void setFamiliaP(string _familiaM) {
        familia = _familiaM; // Modificando el atributo protegido 'familia' heredado de la clase Animal
    }
};

// Clase Gato que hereda de la clase Animal
class Gato : public Animal {
private:
    string nacionalidad;
public:
    // Constructor de la clase Gato
    Gato(string _nacionalidad, string _familia, int _patas, int _dientes, bool _ojos, bool _orejas, bool _cola)
        : Animal(_familia, _patas, _dientes, _ojos, _orejas, _cola) {
        nacionalidad = _nacionalidad;
    }

    string getFamiliaG() {
        return familia; // Accediendo al atributo protegido 'familia' heredado de la clase Animal
    }

    void setFamiliaG(string _familiaM) {
        familia = _familiaM; // Modificando el atributo protegido 'familia' heredado de la clase Animal
    }
};