#include "main.h"
#include "biblioteca.h"

int main() {
    int a, b;
    std::string mensaje(u8"¡Vamos a imprimir numeros con emojis 😀!");
    Main variable = Main();
    variable.imprimirMensajeBiblioteca(mensaje);
    
    variable.imprimirMensajeBiblioteca(std::string(u8"Ingrese el primer número: 🔍"));
    std::cin >> a;
    variable.imprimirMensajeBiblioteca(std::string(u8"Ingrese el ultimo número: 🔍"));
    std::cin >> b;
    
    variable.calcular(a, b);

    return 0;
}

void Main::imprimirMensajeBiblioteca(const std::string & mensaje) {
    std::cout << mensaje << std::endl;
}