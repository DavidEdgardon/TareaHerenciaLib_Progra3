//
// Created by ASUS on 2/7/2018.
//

#include "Paquete.h"
#include <iostream>

Paquete::Paquete(): nombre(""), direccion(""), ciudad(""), estado(""), codpostal(""), peso(0), costo(0), resultado(0) {}
Paquete::Paquete(string n, string d, string c, string e, string cod, double p, double cos) {
    setnombre(n);
    setdireccion(d);
    setciudad(c);
    setestado(e);
    setcodpostal(cod);
    setpeso(p);
    setcosto(cos);
}

string Paquete::getnombre(){
    return nombre;
}
void Paquete::setnombre(string nombre)  {
    Paquete::nombre = nombre;
}
string Paquete::getdireccion() {
    return direccion;
}
void Paquete::setdireccion(string direccion) {
    Paquete::direccion = direccion;
}

string Paquete::getciudad() {
    return ciudad;
}
void Paquete::setciudad(string ciudad) {
    Paquete::ciudad = ciudad;
}
string Paquete::getestado() {
    return estado;
}
void Paquete::setestado(string estado) {
    Paquete::estado = estado;
}

string Paquete::getcodpostal() {
    return codpostal;
}
void Paquete::setcodpostal(string codpostal) {
    Paquete::codpostal = codpostal;
}



void Paquete::setpeso(double _p) {
    if(_p>= 0){
        peso=_p;
    }else{
        peso=0;
    }
}
double Paquete::getpeso() {
    return peso;
}

void Paquete::setcosto(double _c) {
    if(_c>=0){
        costo=_c;
    }
    else{
        costo = 0;
    }
}
double Paquete::getcosto() {
    return costo;
}

double Paquete::calcularCosto() {
    return resultado = (peso*costo);
}




