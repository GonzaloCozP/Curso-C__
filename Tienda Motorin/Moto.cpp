#include <iostream>

using namespace std;

class Moto
{
protected:
    string modelo;
    double precio;
    string marca;
    string descripcion;
    int stock;

public:
Moto (string _modelo, double _precio, string _marca, string _descripcion, int _stock) {
    modelo = _modelo;
    precio = _precio;
    marca = _marca;
    descripcion = _descripcion;
    stock = _stock;
    }
// Setter para el atributo Modelo
  void setModelo(string _modelo) {
    modelo = _modelo;
  }

// Getter para el atributo Modelo
  string getModelo() {
    return modelo;
  }

// Setter para el atributo Precio
  void setPrecio(double _precio) {
    precio = _precio;
  }

// Getter para el atributo Precio
  double getPrecio() {
    return precio;
  }

  // Setter para el atributo Marca
  void setMarca(string _marca) {
    marca = _marca;
  }

// Getter para el atributo Marca
  string getMarca() {
    return marca;
  }

// Setter para el atributo Descripcion
  void setDescripcion(string _descripcion) {
    descripcion = _descripcion;
  }

// Getter para el atributo Descripcion
  string getDescripcion() {
    return descripcion;
  }

  // Setter para el atributo Stock
  void setStock(int _stock) {
    stock = _stock;
  }

// Getter para el atributo Stock
  int getStock() {
    return stock;
  }
};