/*Ingresar 4 números reales, informar el promedio de los mismos con dos
decimales, cuantos de los números ingresados son positivos y cuantos negativos*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    // DATOS O VARIABLES
    float num[4], prom, acum = 0.0;
    int cont_pos = 0, cont_neg = 0;
    // INGRESO DE DATOS
    cout << endl
         << "### INFORMAR PROMEDIO DE 4 #'s REALES A 2 DECIMALES" << endl
         << "INDICAR CUALES SON POSITOS Y NEGATIVOS ###" << endl
         << endl;
    for (size_t i = 0; i < 4; i++)
    {
        cout << "Ingrese Nº " << i + 1 << ": ";
        cin >> num[i];
    }
    // CÁLCULO PROMEDIO, POSITIVOS Y NEGATIVODS
    for (size_t i = 0; i < 4; i++)
    {
        if (num[i] > 0)
        {
            cont_pos++;
            acum += num[i];
        }
        else
        {
            cont_neg++;
            acum += num[i];
        }
    }
    prom = acum / 4;
    // SALIDAS
    cout << endl
         << "*** INFORME RESULTADOS ***" << endl;
    if (prom > 0)
    {
        cout << endl
             << "Promedio: " << setprecision(3) << prom;
    }
    else
    {
        cout << endl
             << "Promedio: " << setprecision(2) << prom;
    }
    cout << endl
         << "Numeros positivos: " << cont_pos;
    cout << endl
         << "Numeros negativos: " << cont_neg << endl
         << endl;
    return 0;
}
