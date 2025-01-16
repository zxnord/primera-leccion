#ifndef _MAIN_H_
#define _MAIN_H_

#include <iostream>
#include <string>

#include "biblioteca.h"

class Main : public biblioteca::Biblioteca {
    public:
        void imprimirMensajeBiblioteca(const std::string & mensaje);

};


#endif