//
// Created by ASUS on 2/8/2018.
//

#ifndef TAREAHERENCIALIB2_PAQUETENOCTURNO_H
#define TAREAHERENCIALIB2_PAQUETENOCTURNO_H
#include "Paquete.h"
#include <iostream>

class PaqueteNocturno : public Paquete{
protected:
    int cost;
public:
    PaqueteNocturno();
    PaqueteNocturno(int);
    double calcularCosto();
};


#endif //TAREAHERENCIALIB2_PAQUETENOCTURNO_H
