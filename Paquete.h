 //
// Created by ASUS on 2/7/2018.
//

#ifndef TAREAHERENCIALIB2_PAQUETE_H
#define TAREAHERENCIALIB2_PAQUETE_H

#include <iostream>
 using namespace std;

 class Paquete {
public:
     string nombre;
     string direccion;
     string ciudad;
     string estado;
     string codpostal;
     double peso;
     double costo;
     double resultado;

Paquete();
Paquete(string,string,string,string,string,double , double);


 string getnombre();
 void setnombre(string);
 string getdireccion();
 void setdireccion(string);
 string getciudad();
 void setciudad(string);
 string getestado();
 void setestado(string);
 string getcodpostal();
 void setcodpostal(string);
double getpeso();
 void setpeso(double);
 double getcosto();
 void setcosto(double);

     double calcularCosto();
 };
#endif //TAREAHERENCIALIB2_PAQUETE_H
