#include <iostream>
#include "Paquete.h"
#include "PaqueteNocturno.h"
#include "PaqueteDosDias.h"
using namespace std;

int main() {
    string nombre = "David";
    string direccion = "Col. Ciudad Nueva";
    string ciudad = "San Pedro Sula";
    string estado = "En Proceso";
    string codigo = "50412";
    int cuotaFija, peso, costo,opc;

    Paquete paquete(nombre, direccion, ciudad, estado, codigo, peso, costo);
    PaqueteDosDias paquete2(cuotaFija);
    PaqueteNocturno paquete3(costo);

do{
    cout << "========Servicio de Envios========" << endl;
    cout << "1. Paquete Normal" << endl;
    cout << "2. Paquete DosDias" << endl;
    cout << "3. Paquete Nocturno" << endl;
    cout << "Ingrese una opcion:  ";
    cin >> opc;
    cout << endl << "Kilogramos del paquete: ";
    cin >> peso;
    paquete.setpeso(peso);
    cout << endl << "Costo por kilogramo: ";
    cin >> costo;
    paquete.setcosto(costo);

    switch (opc) {
        case 1:
            cout << endl << "========Paquete Normal========" << endl;
            cout << endl << "Nombre: " << nombre;
            cout << endl << "Direccion: " << direccion;
            cout << endl << "Ciudad: " << ciudad;
            cout << endl << "Estado: " << estado;
            cout << endl << "Codigo Postal: " << codigo;
            cout << endl << "Kilogramos: " << paquete.getpeso();
            cout << endl << "Costo por kilogramos: " << paquete.getcosto();
            cout << endl << "Total: " << paquete.calcularCosto()<<endl;
            break;
        case 2:
            cout << endl << "Ingrese la cuota fija: ";
            cin >> cuotaFija;
            paquete2.setCuotaFija(cuotaFija);
            cout << endl << "========Paquete Dos Dias========" << endl;
            cout << endl << "Nombre: " << nombre;
            cout << endl << "Direccion: " << direccion;
            cout << endl << "Ciudad: " << ciudad;
            cout << endl << "Estado: " << estado;
            cout << endl << "Codigo Postal: " << codigo;
            cout << endl << "Peso en Kilogramos: " << paquete.getpeso();
            cout << endl << "Costo por kilogramos: " << paquete.getcosto();
            cout << endl << "Total: " << paquete.calcularCosto() + cuotaFija<<endl;

            break;
        case 3:
            cout << endl << "========Paquete Nocturno========" << endl;
            cout << "========Aviso========" << endl;
            cout << "En los envios Nocturno el costo por Kilogramo aumenta en un 20%" << endl;
            cout << "Nombre: " << nombre;
            cout << endl << "Direccion: " << direccion;
            cout << endl << "Ciudad: " << ciudad;
            cout << endl << "Estado: " << estado;
            cout << endl << "Codigo Postal: " << codigo;
            cout << endl << "Peso en Kilogramos: " << paquete.getpeso();
            cout << endl << "Costo por kilogramos: " << paquete.getcosto();
            cout << endl << "Total: " << paquete.calcularCosto() + (paquete.calcularCosto() * 0.20)<<endl;
            break;
    }
}while(opc!=-1);
}