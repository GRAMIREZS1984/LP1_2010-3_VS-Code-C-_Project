/*Ejercicio Nº 3: Ingresar 2 números reales, informar su parte entera.*/

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    // DATOS O VARIABLES
    float n1, n2, intpart_n1, fracpart_n1, intpart_n2, fracpart_n2;
    // ENTRADA DE DATOS
    cout << endl
         << "### INFORMAR PARTE ENTERA DE 2 #'s REALES ###" << endl
         << endl
         << "Ingrese 1º # real: ";
    cin >> n1;
    cout << "Ingrese 2º # real: ";
    cin >> n2;
    // CÁLCULO PARTE ENTERA
    // Para 1º # real
    fracpart_n1 = modf(n1, &intpart_n1);
    // Para 2º # real
    fracpart_n2 = modf(n2, &intpart_n2);
    // SALIDAS O RESULTADOS
    // S1_n1:
    cout << endl
         << "** 1º # real **" << endl
         << "Entero: " << intpart_n1 << endl;
    cout << "Fraccionaria: " << fracpart_n1 << endl;
    // S2_n2:
    cout << endl
         << "** 2º # real **" << endl
         << "Entero: " << intpart_n2 << endl;
    cout << "Fraccionaria: " << fracpart_n2 << endl
         << endl;
    return 0;
}
