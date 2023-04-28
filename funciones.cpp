#include <iostream>
using namespace std;

int main() {
    float venta, total = 0;
    char operador;
    bool continuar = true;

    while (continuar) {
        cout << "Ingrese el operador (T para Tigo, C para Claro): ";
        cin >> operador;

        cout << "Ingrese el valor de la venta: ";
        cin >> venta;

        if (operador == 'T' || operador == 't') {
            total += venta;
        }
        else if (operador == 'C' || operador == 'c') {
            if (venta > 500) {
                total += venta * 0.97; 
            }
            else {
                total += venta;
            }
        }
        else {
            cout << "Operador no válido. Intente de nuevo." << endl;
            continue;
        }

        cout << "¿Desea continuar? (S/N): ";
        char respuesta;
        cin >> respuesta;
        if (respuesta == 'N' || respuesta == 'n') {
            continuar = false;
        }
    }

    cout << "El total de ventas es: C$" << total << endl;

    return 0;
}
