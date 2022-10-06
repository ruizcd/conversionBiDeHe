#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include "clasebinario.h"
#include "claseDecimal.h"
#include "claseHexa.h"

using namespace std;

class decimalBi {
public:
    int n;
    int binario(int num) {
        int aux = 0, mul = 1;
        while (num > 1) {
            int mod = num % 2;
            aux += mul * mod;
            mul = mul * 10;
            num = num / 2;
        }
        aux += mul;
        return aux;
    }

    void ingresarDeBi() {
        cout << endl << "Ingrese un valor en decimal: ";
        cin >> n;
    }

    void mostrarDeBi() {
        cout << endl << "El numero equivalente en binario es: " << binario(n) << endl;

    }
};

class decimalHe {
public:
    int digitoex[20];
    int decimal, residuo, resultado, i = 0;

    void ingresarDeHe() {
        cout << endl << "Ingresa un valor en decimal: ";
        cin >> decimal;

        do
        {
            residuo = decimal % 16;
            resultado = decimal / 16;
            digitoex[i] = residuo;
            decimal = resultado;
            i++;
        } while (resultado > 15);

        digitoex[i] = resultado;
    }

    void mostrarDeHe() {
        cout << endl << "El equivalente en hexadecimal es: ";

        for (int j = i; j >= 0; j--) {
            if (digitoex[j] == 10) {
                cout << "A";
            }
            else if (digitoex[j] == 11) {
                cout << "B";
            }
            else if (digitoex[j] == 12) {
                cout << "C";
            }
            else if (digitoex[j] == 13) {
                cout << "D";
            }
            else if (digitoex[j] == 14) {
                cout << "E";
            }
            else if (digitoex[j] == 15) {
                cout << "F";
            }
            else {
                cout << digitoex[j];
            }
        }
        cout << endl;
    }
};