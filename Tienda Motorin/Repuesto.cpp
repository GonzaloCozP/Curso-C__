#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Clase Producto
class Producto {
protected:
    string nombre;
    string categoria;
    int stock;
    string fechaRegistro;

public:
    Producto(string nombre, string categoria, int stock, string fechaRegistro) {
        this->nombre = nombre;
        this->categoria = categoria;
        this->stock = stock;
        this->fechaRegistro = fechaRegistro;
    }

    string getNombre() {
        return nombre;
    }

    string getCategoria() {
        return categoria;
    }

    int getStock() {
        return stock;
    }

    string getFechaRegistro() {
        return fechaRegistro;
    }
};

// Función para generar el reporte de stock de productos
void generarReporte(vector<Producto> productos) {
    // Crear y abrir el archivo
    ofstream archivo("reporte_stock_productos.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    // Escribir el reporte en el archivo
    archivo << "Reporte de Stock de Productos:" << endl;

    for (Producto& producto : productos) {
        archivo << "Nombre: " << producto.getNombre() << endl;
        archivo << "Categoría: " << producto.getCategoria() << endl;
        archivo << "Stock: " << producto.getStock() << endl;
        archivo << "Fecha de registro: " << producto.getFechaRegistro() << endl;
        archivo << endl;
    }

    // Cerrar el archivo
    archivo.close();

    cout << "Reporte generado correctamente." << endl;
}

int main() {
    // Vector para almacenar los productos
    vector<Producto> productos;

    // Leer los datos de los productos desde el archivo
    ifstream archivo("productos.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 0;
    }

    string linea;
    while (getline(archivo, linea)) {
        // Obtener los datos de la línea
        string nombre, categoria, fechaRegistro;
        int stock;

        // Procesar la línea y extraer los datos
        // Suponiendo que los datos están separados por comas
        // y en el orden: nombre, categoria, stock, fechaRegistro
        size_t pos = 0;
        string token;
        int contador = 0;

        while ((pos = linea.find(',')) != string::npos) {
            token = linea.substr(0, pos);

            if (contador == 0) {
                nombre = token;
            } else if (contador == 1) {
                categoria = token;
            } else if (contador == 2) {
                stock = stoi(token);
            } else if (contador == 3) {
                fechaRegistro = token;
            }

            linea.erase(0, pos + 1);
            contador++;
        }

        // Crear un objeto Producto y agregarlo al vector
        Producto producto(nombre, categoria, stock, fechaRegistro);
        productos.push_back(producto);
    }

    archivo.close();

    // Generar el reporte de stock de productos
    generarReporte(productos);

    return 0;
}