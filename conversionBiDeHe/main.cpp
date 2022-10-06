#include <iostream>
#include <string>
#include <math.h>
#include "clasebinario.h"
#include "claseDecimal.h"
#include "claseHexa.h"

using namespace std;

int main() {
    int opc, opcB, opcD, opcH;

    cout << endl << "\t MENU DE CONVERSIONES \t" << endl;
    cout << endl << "1. - Conversion de Binarios";
    cout << endl << "2. - Conversion de Decimales";
    cout << endl << "3. - Conversion de Hexadecimales" << endl;

    cout << endl << "Elige una opcion: ";
    cin >> opc;

    while (opc <= 3) {

        if (opc == 1){
            cout << endl << "1. - Binarios a Decimales" << endl;
            cout << "2. - Binarios a Hexadecimales" << endl;
            cout << "Regresa al menu con cualquier otra tecla" << endl << endl;
            cin >> opcB;
            if (opcB == 1){
                binarioDe* binDe;
                binarioDe imprimirBiDe;
                binDe = &imprimirBiDe;
                binDe->ingresarBiDe();
                binDe->mostrarBiDe();
            }else if (opcB == 2) {
                binarioHe* binHe;
                binarioHe imprimirBiHe;
                binHe = &imprimirBiHe;
                binHe->ingresarBiHe();
                binHe->mostrarBiHe();
            }else {
                return main();
            }
        } else if (opc == 2) {
            cout << endl << "1. - Decimales a binario" << endl;
            cout << "2. - Decimales a Hexadecimales" << endl;
            cout << "Regresa al menu con cualquier otra tecla" << endl << endl;
            cin >> opcB;
            if (opcB == 1) {
                decimalBi* decBi;
                decimalBi imprimirDeBi;
                decBi = &imprimirDeBi;
                decBi->ingresarDeBi();
                decBi->mostrarDeBi();
            }
            else if (opcB == 2) {
                decimalHe* decHe;
                decimalHe imprimirDeHe;
                decHe = &imprimirDeHe;
                decHe->ingresarDeHe();
                decHe->mostrarDeHe();
            }
            else {
                return main();
            }
        } else if (opc == 3){
            cout << endl << "1. - Hexadecimal a Binario" << endl;
            cout << "2. - Hexadecimal a Decimal" << endl;
            cout << "Regresa al menu con cualquier otra tecla" << endl << endl;
            cin >> opcB;
            if (opcB == 1) {
                hexadecimalBi* hexBi;
                hexadecimalBi imprimirHexBi;
                hexBi = &imprimirHexBi;
                hexBi->ingresarHeBi();
                hexBi->mostrarHeBi();
            }
            else if (opcB == 2) {
                hexadecimalDe* hexDe;
                hexadecimalDe imprimirHexDe;
                hexDe = &imprimirHexDe;
                hexDe->ingresarHeDe();
                hexDe->mostrarHeDe();
            }
            else {
                return main();
            }
        }
    } 
    return 0;
}
    


    

    