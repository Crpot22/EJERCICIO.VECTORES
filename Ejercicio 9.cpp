#include <iostream>
#include <vector>
using namespace std;

vector<int> inputheights(vector<int> zvector);
int countWrongPositions(vector<int> zvector);

int main() {
    vector<int> heights = {};
    heights = inputheights(heights);

    int resultado = countWrongPositions(heights);
    cout << "Estudiantes fuera de lugar: " << resultado << endl;

    return 0;
}

// Función para capturar las alturas
vector<int> inputheights(vector<int> zvector) {
    int n, altura;
    cout << "¿Cuántos estudiantes hay?" << endl;
    cin >> n;
    cout << "Introduzca las alturas:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> altura;
        zvector.push_back(altura);
    }
    return zvector;
}

// Función para contar cuántos estudiantes están fuera de su lugar
int countWrongPositions(vector<int> zvector) {
    // Copiamos el vector original para ordenarlo
    vector<int> esperado;
    for (int i = 0; i < zvector.size(); i++) {
        esperado.push_back(zvector[i]);
    }

    // Ordenamos el vector esperado usando bubble sort
    for (int i = 0; i < esperado.size(); i++) {
        for (int j = 0; j < esperado.size() - 1; j++) {
            if (esperado[j] > esperado[j + 1]) {
                int aux = esperado[j];
                esperado[j] = esperado[j + 1];
                esperado[j + 1] = aux;
            }
        }
    }

    // Contamos las posiciones diferentes entre zvector y esperado
    int contador = 0;
    for (int i = 0; i < zvector.size(); i++) {
        if (zvector[i] != esperado[i]) {
            contador++;
        }
    }

    return contador;
}
