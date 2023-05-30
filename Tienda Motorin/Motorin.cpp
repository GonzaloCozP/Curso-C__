#include <iostream>

using namespace std;

class Motorin
{
protected:
string nombtienda;
string direccion;
int empleados;
int clientes;
public:
Motorin (string _nombtienda, string _direccion, int _empleados, int _clientes){
    nombtienda = _nombtienda;
    direccion = _direccion;
    empleados = _empleados;
    clientes = _clientes;
}
// Setter para el atributo NombTienda
  void setNombTienda(string _nombtienda) {
    nombtienda = _nombtienda;
  }

// Getter para el atributo NombTienda
  string getNombTienda() {
    return nombtienda;
  }

// Setter para el atributo Direccion
  void setDireccion(string _direccion) {
    direccion = _direccion;
  }

// Getter para el atributo Direccion
  string getDireccion() {
    return direccion;
  }

// Setter para el atributo Empleados
  void setEmpleados(int _empleados) {
    empleados = _empleados;
  }

// Getter para el atributo Empleados
  int getEmpleados() {
    return empleados;
  }

// Setter para el atributo Clientes
  void setClientes(int _clientes) {
    clientes = _clientes;
  }

// Getter para el atributo Clientes
  int getClientes() {
    return clientes;
  }
};