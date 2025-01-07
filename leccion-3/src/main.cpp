#include "main.h"
#include "biblioteca.h"

int main() {
    std::string mensaje = "¡Hola Mundo!";
    imprimirMensaje(mensaje);
    imprimirMensajeBiblioteca(mensaje);
    return 0;
}

void imprimirMensaje(std::string mensaje) {
    std::cout << mensaje << std::endl;
}