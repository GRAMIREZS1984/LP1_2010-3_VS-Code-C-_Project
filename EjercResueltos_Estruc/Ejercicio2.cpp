/*Ejercicio Nº 2: Se ingresan desde el teclado dos números enteros,
informar la sumatoria y el producto de los mismos. */

#include <iostream>

using namespace std;

int main()
{
     // DATOS O VARIABLE
     int n1, n2, suma, producto;
     // ENTRADA DE DATOS
     cout << endl;
     cout << "### SUMA Y PRODUCTO DE 2 # ENTEROS ###" << endl
          << endl;
     cout << "Ingrese Nº 1: ";
     cin >> n1;
     cout << "Ingrese Nº 2: ";
     cin >> n2;
     // CÁLCULO SUMA Y PRODUCTO
     suma = n1 + n2;
     producto = n1 * n2;
     cout << endl;
     // SALIDA DE DATOS
     cout << "Suma: ";
     cout << suma << endl;
     cout << "Producto: " << producto << endl
          << endl;
     return 0;
}