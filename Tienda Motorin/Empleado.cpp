#include <iostream>

using namespace std;

class Empleado
{
protected:
int edad;
double salario;
int experiencia;
string nomemple;
string habilidades;
public:
Empleado(int _edad, double _salario, int _experiencia, string _nomemple, string _habilidades){
    edad = _edad;
    salario = _salario;
    experiencia = _experiencia;
    nomemple = _nomemple;
    habilidades = _habilidades;
    }
// Setter para el atributo Edad
  void setEdad(int _edad) {
    edad = _edad;
  }

// Getter para el atributo Edad
  int getEdad() {
    return edad;
  }
// Setter para el atributo Salario
  void setSalario(double _salario) {
    salario = _salario;
  }

// Getter para el atributo Salario
  double getSalario() {
    return salario;
  }

// Setter para el atributo Experiencia
  void setExperiencia(int _experiencia) {
    experiencia = _experiencia;
  }

// Getter para el atributo Experiencia
  int getExperiencia() {
    return experiencia;
  }

// Setter para el atributo NomEmple
  void setNomEmple(string _nomemple) {
    nomemple = _nomemple;
  }

// Getter para el atributo NomEmple
  string getNomEmple() {
    return nomemple;
  }

  // Setter para el atributo Habilidades
  void setHabilidades(string _habilidades) {
    habilidades = _habilidades;
  }

// Getter para el atributo Habilidades
  string getHabilidades() {
    return habilidades;
  }
  
};