#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// Clase Cliente
class Cliente {
protected:
    string nombre;
    string fechaRegistro;
    double consumo;

public:
    Cliente(string nombre, string fechaRegistro, double consumo) {
        this->nombre = nombre;
        this->fechaRegistro = fechaRegistro;
        this->consumo = consumo;
    }

    string getNombre() {
        return nombre;
    }

    string getFechaRegistro() {
        return fechaRegistro;
    }

    double getConsumo() {
        return consumo;
    }
};

// Función para generar el reporte de clientes y consumo por fecha
void generarReporte(vector<Cliente> clientes) {
    // Crear y abrir el archivo
    ofstream archivo("reporte_clientes_consumo.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    // Mapa para almacenar los totales de consumo por fecha
    map<string, double> consumoPorFecha;

    // Calcular los totales de consumo por fecha
    for ( Cliente& cliente : clientes) {
        consumoPorFecha[cliente.getFechaRegistro()] += cliente.getConsumo();
    }

    // Escribir el reporte en el archivo
    archivo << "Reporte de Clientes y Consumo por Fecha:" << endl;

    for (const auto& entry : consumoPorFecha) {
        archivo << "Fecha: " << entry.first << endl;
        archivo << "-------------------------" << endl;

        for (Cliente& cliente : clientes) {
            if (cliente.getFechaRegistro() == entry.first) {
                archivo << "Cliente: " << cliente.getNombre() << endl;
                archivo << "Consumo: $" << cliente.getConsumo() << endl;
                archivo << endl;
            }
        }

        archivo << "Total Consumo: $" << entry.second << endl;
        archivo << "-------------------------" << endl;
        archivo << endl;
    }

    // Cerrar el archivo
    archivo.close();

    cout << "Reporte generado correctamente." << endl;
}

int main() {
    // Vector para almacenar los clientes
    vector<Cliente> clientes;

    // Leer los datos de los clientes desde el archivo
    ifstream archivo("clientes.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return 0;
    }

    string linea;
    while (getline(archivo, linea)) {
        // Obtener los datos de la línea
        string nombre, fechaRegistro;
        

        // Procesar la línea y extraer los datos
        // Suponiendo que los datos están separados por comas
}
}