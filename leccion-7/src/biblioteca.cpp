#include "biblioteca.h"

namespace biblioteca {

void Biblioteca::imprimirMensajeBiblioteca(const std::string & mensaje) {
    std::cout << mensaje << u8" Desde la biblioteca. 😋" << std::endl;
}

void Biblioteca::calcular(int a, int b) {
    if(a < 0 || b < 0) {
        imprimirMensajeBiblioteca(u8"No se puede calcular con números negativos. 😩");
    } else if(a > b) {
        imprimirMensajeBiblioteca(u8"El primer número debe ser menor o igual al segundo. 😔");
    } else {
        imprimirMensajeBiblioteca(u8"Calculando... " + std::to_string(a) + u8" + " + std::to_string(b) + u8" = " + std::to_string(a + b));
    }
}

}