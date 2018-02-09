//
// Created by ASUS on 2/7/2018.
//

#include "PaqueteDosDias.h"
#include "Paquete.h"


PaqueteDosDias::PaqueteDosDias(): cuotaFija(0) {}
PaqueteDosDias::PaqueteDosDias(int _Cuota) : Paquete() {
    cuotaFija=_Cuota;
}

void PaqueteDosDias::setCuotaFija(int _cuota) {
    cuotaFija=_cuota;
}


double PaqueteDosDias::calcularCosto() {
    Paquete::calcularCosto();
    return resultado= resultado+cuotaFija;

}

