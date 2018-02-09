//
// Created by ASUS on 2/7/2018.
//

#ifndef TAREAHERENCIALIB2_PAQUETEDOSDIAS_H
#define TAREAHERENCIALIB2_PAQUETEDOSDIAS_H

#include <queue>
#include "Paquete.h"

class PaqueteDosDias : public Paquete{
protected:
    int cuotaFija;
public:
    PaqueteDosDias();
    PaqueteDosDias(int);
    void setCuotaFija(int);
    double calcularCosto();
};

#endif //TAREAHERENCIALIB2_PAQUETEDOSDIAS_H
