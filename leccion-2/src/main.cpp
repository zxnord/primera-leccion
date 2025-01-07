#include "main.h"

int main() {
    std::string mensaje = "¡Hola Mundo!";
    imprimirMensaje(mensaje);
    return 0;
}

void imprimirMensaje(std::string mensaje) {
    std::cout << mensaje << std::endl;
}