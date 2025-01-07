#include "biblioteca.h"

void imprimirMensajeBiblioteca(std::string mensaje) {
    std::cout << mensaje << " Desde la biblioteca." << std::endl;
}

void calcular(int a, int b) {
    if(a < 0 || b < 0) {
        imprimirMensajeBiblioteca("No se puede calcular con números negativos.");
    } else if(a > b) {
        imprimirMensajeBiblioteca("El primer número debe ser menor o igual al segundo.");
    } else {
        imprimirMensajeBiblioteca("Calculando... " + std::to_string(a) + " + " + std::to_string(b) + " = " + std::to_string(a + b));
    }
}

