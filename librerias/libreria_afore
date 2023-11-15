#ifndef AFORE_H
#define AFORE_H
#include <iostream>
#include <sting>
struct Persona {
    std::string Nombre, ocupacion;
    int sueldo, edad;
};

struct Persona ingresar() {
    Persona Gent;
    std::cout << "Ingresa nombre: ";
    std::cin >> Gent.Nombre;
    std::cout << "Ingresa ocupacion: ";
    std::cin >> Gent.ocupacion;
    std::cout << "Ingresa edad: ";
    std::cin >> Gent.edad;
    std::cout << "Ingresa sueldo: ";
    std::cin >> Gent.sueldo;

    return Gent;
}

void jubilacion(const Persona &Gent) {
    int restante;

    if (Gent.edad <= 66) {
        restante = 66 - Gent.edad;
        std::cout << "Te faltan " << restante << " años para retirarte y llevas un total de " << ((Gent.sueldo*.10) * 12) * restante << " ahorrado." << std::endl;
    } else {
        restante = Gent.edad - 66;
        std::cout << "Ya te puedes jubilar. Tus ahorros son " << ((Gent.sueldo* .10) * 12) * restante << "." << std::endl;
    }
};

#endif
