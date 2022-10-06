#pragma once
#include <iostream>
#include <string>
#include <math.h>
#include "clasebinario.h"
#include "claseDecimal.h"
#include "claseHexa.h"

using namespace std;

class hexadecimalBi {
public:
    char hex[100];
    int sum = 0, i, len, c = 0;

    void ingresarHeBi() {
        cout << endl << "Ingrese un valor en hexadecimal: ";
        cin >> hex;
    }

    void mostrarHeBi() {
        cout << endl << "El equivalente en binario es: ";
        while (hex[c])
        {
            switch (hex[c])
            {
            case '0':
                cout << "0000";
                break;
            case '1':
                cout << "0001";
                break;
            case '2':
                cout << "0010";
                break;
            case '3':
                cout << "0011";
                break;
            case '4':
                cout << "0100";
                break;
            case '5':
                cout << "0101";
                break;
            case '6':
                cout << "0110";
                break;
            case '7':
                cout << "0111";
                break;
            case '8':
                cout << "1000";
                break;
            case '9':
                cout << "1001";
                break;
            case 'A':
            case 'a':
                cout << "1010";
                break;
            case 'B':
            case 'b':
                cout << "1011";
                break;
            case 'C':
            case 'c':
                cout << "1100";
                break;
            case 'D':
            case 'd':
                cout << "1101";
                break;
            case 'E':
            case 'e':
                cout << "1110";
                break;
            case 'F':
            case 'f':
                cout << "1111";
                break;
            default:
                cout << "Hexadecimal Incorrecto:" << hex[c] << endl;;
            }
            c++;
        }
    }
};

class hexadecimalDe : public hexadecimalBi {
public:
    void ingresarHeDe() {
        cout << endl << "Ingrese un valor en hexadecimal: ";
        cin >> hex;
    }

    void mostrarHeDe() {
        len = strlen(hex);
        for (i = len - 1; i >= 0; i--) {
            if (hex[i] >= '0' && hex[i] <= '9') {
                sum = sum + (hex[i] - 48) * pow(16, c);
                c++;
            }
            else if (hex[i] >= 'A' && hex[i] <= 'F') {
                sum = sum + (hex[i] - 55) * pow(16, c);
                c++;
            }
        }
        cout << "El equivalente en decimal es: " << sum << endl;
    }
};