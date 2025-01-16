#include "main.h"
#include "biblioteca.h"

int main() {
    int a, b;
    std::string mensaje(u8"¡Vamos a imprimir numeros en un rango. Con emojis 😀!");
    imprimirMensaje(mensaje);
    biblioteca::imprimirMensajeBiblioteca(mensaje);
    
    imprimirMensaje(std::string(u8"Ingrese el primer número: 🔍"));
    std::cin >> a;
    imprimirMensaje(std::string(u8"Ingrese el ultimo número: 🔍"));
    std::cin >> b;
    
    biblioteca::calcular(a, b);

    return 0;
}

void imprimirMensaje(const std::string & mensaje) {
    std::cout << mensaje << std::endl;
}