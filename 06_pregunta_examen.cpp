#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    //se usa el string para almacenar la cantidad de palabras definidas
    const int MAX_NUM_PALABRAS = 100;
    string palabras[MAX_NUM_PALABRAS];

    //se leen las palabras pero cuando el usuario llegue a escribir FIN se termina
    int num_palabras = 0;
    string palabra;
    while (cin >> palabra && palabra != "fin" && num_palabras < MAX_NUM_PALABRAS) {
        palabras[num_palabras] = palabra;
        num_palabras++;
    }

    //se usa para ordenar de manera alfabetica 
    sort(palabras, palabras + num_palabras, [](const string& a, const string& b) { return a < b; });

    //se usa para imprimir las palabras que se ordenaron de manera alfabetica
    
    for (int i = 0; i < num_palabras; i++) {
        cout << palabras[i] << " ";
    }
    cout << endl;

    return 0;
}
