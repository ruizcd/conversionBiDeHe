#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include "clasebinario.h"
#include "claseDecimal.h"
#include "claseHexa.h"

using namespace std;

class binarioDe {
public:
    int binario, resultado, resto = 0;
    int digito[10];

    void ingresarBiDe() {
        cout << endl << "Introduce el numero en binario: ";
        cin >> binario;
    }

    void mostrarBiDe() {
        for (int i = 0; i < 10; i++) {
            digito[i] = binario % 10;
            binario /= 10;
        }

        for (int i = 9; i >= 0; i--) {
            resultado = (resto * 2) + digito[i];
            resto = resultado;
        }

        cout << endl << "El numero equivalente en decimal es: " << resultado << endl;
    }
};

class binarioHe {
public:
    int he[100];
    int m = 1, dno = 0, bino;

    void ingresarBiHe() {
        cout << endl << "Introduce el numero en binario: ";
        cin >> bino;
        while (bino > 0) {
            dno = dno + (bino % 2) * m;
            m = m * 2;
            bino = bino / 10;
        }
        m = 0;
        while (dno != 0) {
            he[m] = dno % 16;
            dno = dno / 16;
            m++;
        }
    }

    void mostrarBiHe() {
        cout << endl << "El numero equivalente en hexadecimal es: ";
        for (int k = m - 1; k > 0; k--) {
            if (he[k] > 9) {
                cout << (char)(he[k] + 55) << endl;
            }
            else {
                cout << he[k];
            }
        }
    }
};