#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Clase Servicio
class Servicio {
protected:
    string descripcion;
    string realizadoPor;
    double tiempo;

public:
    Servicio(string descripcion, string realizadoPor, double tiempo) {
        this->descripcion = descripcion;
        this->realizadoPor = realizadoPor;
        this->tiempo = tiempo;
    }

    string getDescripcion() {
        return descripcion;
    }

    string getRealizadoPor() {
        return realizadoPor;
    }

    double getTiempo() {
        return tiempo;
    }
};

// Clase Repuesto
class Repuesto {
protected:
    string nombre;
    double precio;

public:
    Repuesto(string nombre, double precio) {
        this->nombre = nombre;
        this->precio = precio;
    }

    string getNombre() {
        return nombre;
    }

    double getPrecio() {
        return precio;
    }
};

// Función para generar el reporte de servicios y repuestos vendidos
void generarReporte(vector<Servicio>& servicios, vector<vector<Repuesto>>& repuestos) {
    // Crear y abrir el archivo
    ofstream archivo("reporte_servicios_repuestos.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    // Escribir el reporte en el archivo
    archivo << "Reporte de Servicios y Repuestos Vendidos:" << endl;
    archivo << "---------------------------------------" << endl;

    for (size_t i = 0; i < servicios.size(); i++) {
        archivo << "Servicio #" << (i + 1) << ":" << endl;
        archivo << "Descripción: " << servicios[i].getDescripcion() << endl;
        archivo << "Realizado por: " << servicios[i].getRealizadoPor() << endl;
        archivo << "Tiempo: " << servicios[i].getTiempo() << " horas" << endl;

        if (!repuestos[i].empty()) {
            archivo << "Repuestos vendidos:" << endl;

            for (Repuesto& repuesto : repuestos[i]) {
                archivo << "- Nombre: " << repuesto.getNombre() << endl;
                archivo << "  Precio: $" << repuesto.getPrecio() << endl;
            }
        } else {
            archivo << "No se vendieron repuestos en este servicio." << endl;
        }

        archivo << "---------------------------------------" << endl;
        archivo << endl;
    }

    // Cerrar el archivo
    archivo.close();

    cout << "Reporte generado correctamente." << endl;
}

int main() {
    // Vectores para almacenar los servicios y los repuestos vendidos en cada servicio
    vector<Servicio> servicios;
    vector<vector<Repuesto>> repuestos;

    int opcion;
    while (true) {
        cout << "Menú:" << endl;
        cout << "1. Agregar servicio" << endl;
        cout << "2. Agregar repuesto a un servicio" << endl;
        cout << "3. Generar reporte" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;}

        if (opcion == 1) {
            string descripcion, realizadoPor;
            double tiempo;

            cout << "Ingrese la descripción del servicio: ";
            cin.ignore(); // Ignorar el salto de línea pendiente
            getline(cin, descripcion);}
}