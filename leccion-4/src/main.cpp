#include "main.h"
#include "biblioteca.h"

int main() {
    int a, b;
    std::string mensaje = "¡Hola Mundo!";
    imprimirMensaje(mensaje);
    imprimirMensajeBiblioteca(mensaje);
    
    imprimirMensaje("Ingrese un número: ");
    std::cin >> a;
    imprimirMensaje("Ingrese un segundo número: ");
    std::cin >> b;
    calcular(a, b);

    return 0;
}

void imprimirMensaje(std::string mensaje) {
    std::cout << mensaje << std::endl;
}