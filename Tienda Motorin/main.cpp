#include <iostream>
#include <fstream>

using namespace std;

void generarReporte(const string& nombreArchivo)
{
    ofstream archivo(nombreArchivo);

    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo" << endl;
        return;
    }

    // Escribir encabezado del reporte
    archivo << "Reporte de Stock de Productos" << endl;
    archivo << "----------------------------------------" << endl;

    // Obtener los datos y escribirlos en el archivo
    archivo << "Fecha de Registro | Cantidad | Categoría" << endl;
    archivo << "----------------------------------------" << endl;
    archivo << "2023-05-01       | 10       | Electrónica" << endl;
    archivo << "2023-05-02       | 5        | Ropa" << endl;
    archivo << "2023-05-03       | 15       | Hogar" << endl;

    archivo.close();
    cout << "El reporte se generó correctamente." << endl;
}

int main()
{
    string nombreArchivo = "reporte.txt";
    generarReporte(nombreArchivo);

    return 0;
}

