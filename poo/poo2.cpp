Google Classroom
Classroom
Programación I
ID: 6192
Tablón
Trabajo de clase
Personas
Trabajo de clase de Programación I ID: 6192
Todos los temas
parcial 3
parcial 3
Completada Tarea
Librerías
Participación
Fecha de entrega: 15 nov
Completada Tarea
Ejercicio de Repaso
Participación
Fecha de entrega: 9 nov
Parcial 2
Parcial 2
Completada Tarea
Proyecto del parcial
Examen
Fecha de entrega: 9 nov, 23:59
Completada Tarea
Actividad POO 2
Participación
Fecha de entrega: 19 oct, 23:59
Completada Tarea
Actividad POO
Participación
Fecha de entrega: 18 oct, 23:59
Material
Introducción a la Programación Orientada a Objetos
Última modificación: 18 oct
Aquí está el código de ejemplo de introducción a la POO

main.cpp
Texto

POO.md
Texto

POO.pdf
PDF
Completada Tarea
Investigación POO
Participación
Fecha de entrega: 18 oct, 23:59
Completada Tarea
Funciones y Struct
Actividades y Prácticas
Fecha de entrega: 12 oct, 23:59
Completada Tarea
Ejercicios de Arreglos
Actividades y Prácticas
Fecha de entrega: 5 oct
Completada Tarea
Investigación: Arreglos Cadenas de caracteres y conversion de tipos de datos
Actividades y Prácticas
Fecha de entrega: 5 oct, 23:59
Completada Tarea
Strings
Actividades y Prácticas
Fecha de entrega: 5 oct
Primer Parcial
Primer Parcial
Completada Tarea
Calculadora
Avance de Procesos
Fecha de entrega: 28 sept, 23:59
Examen
Examen
Completada Tarea
Examen
Examen
Fecha de entrega: 28 sept, 11:00
Introducción a la programación
Introducción a la programación
Completada Tarea
Estructuras de control
Actividades y Prácticas
Fecha de entrega: 28 sept
Pseudocódigo y Diagramas de Flujo
Pseudocódigo y Diagramas de Flujo
Completada Tarea
Tipos de datos
Actividades y Prácticas
Fecha de entrega: 21 sept, 23:59
Completada Tarea
Buenas prácticas de Programación
Actividades y Prácticas
Fecha de entrega: 20 sept, 23:59
Introducción al Curso
Introducción al Curso
Completada Tarea
Prueba Diagnostica
Participación
Fecha de entrega: 13 sept, 23:59
Bibliografía del Curso
Bibliografía del Curso
Material
How to Program in C++ Harvey & Paul Deitel
Publicado: 13 sept
```cpp
#include <iostream>
#include <string>

class Persona {
    public:
        Persona(std::string nombre, int edad) {
            this->nombre = nombre;
            this->edad = edad;
        }

        std::string getNombre() {
            return this->nombre;
        }

        int getEdad() {
            return this->edad;
        }
        void setNombre(std::string nombre) {
            this->nombre = nombre;
        }
    private:
        std::string nombre;
        int edad;

    protected:
        friend class Amigo;
        virtual std::string getNombreCompleto() {
            return this->nombre;
        }
};

// Herencia
class Estudiante : public Persona {
    public:
        Estudiante(std::string nombre, int edad, std::string carrera) : Persona(nombre, edad) {
            this->carrera = carrera;
        }
        std::string getCarrera() {
            return this->carrera;
        }
        void setCarrera(std::string carrera) {
            this->carrera = carrera;
        }
    private:
        std::string carrera;

    friend class Maestro;
};

class Maestro : public Persona {
    public:
        Maestro(std::string nombre, int edad, std::string carrera) : Persona(nombre, edad) {
            this->carrera = carrera;
        }
        std::string getCarrera() {
            return this->carrera;
        }
        void setCarrera(std::string carrera) {
            this->carrera = carrera;
        }
        std::string getNombreCompleto(Estudiante estudiante) {
            return estudiante.getNombreCompleto();
        }
    private:
        std::string carrera;
};

//Encapsulamiento
class Amigo {
    public:
        std::string getNombreCompleto(Persona persona) {
            return persona.getNombreCompleto();
        }
};

//Polimorfismo
class Animal {
    public:
        virtual void sonido() {
            std::cout << "Sonido de animal" << std::endl;
        }
};

class Perro : public Animal {
    public:
        void sonido() {
            std::cout << "Guau" << std::endl;
        }
};

class Gato : public Animal {
    public:
        void sonido() {
            std::cout << "Miau" << std::endl;
        }
};

// Sobrecarga de funciones
class Operaciones {
    public:
        int suma(int a, int b) {
            return a + b;
        }
        int suma(int a, int b, int c) {
            return a + b + c;
        }
        int suma(int a, int b, int c, int d) {
            return a + b + c + d;
        }
};

// Sobrecarga de operadores
class Punto {
    public:
        Punto(int x, int y) {
            this->x = x;
            this->y = y;
        }
        Punto operator+(Punto punto) {
            return Punto(this->x + punto.x, this->y + punto.y);
        }
        Punto operator-(Punto punto) {
            return Punto(this->x - punto.x, this->y - punto.y);
        }
        Punto operator*(Punto punto) {
            return Punto(this->x * punto.x, this->y * punto.y);
        }
        Punto operator/(Punto punto) {
            return Punto(this->x / punto.x, this->y / punto.y);
        }
        void print() {
            std::cout << "x: " << this->x << " y: " << this->y << std::endl;
        }
    private:
        int x;
        int y;
};


int main(){
    Persona Juan("Juan", 20);
    std::cout << Juan.getNombre() << std::endl;
    std::cout << Juan.getEdad() << std::endl;

    Juan.setNombre("Juanito");
    std::cout << Juan.getNombre() << std::endl;

    Estudiante Paco("Paco", 20, "Ing. Sistemas");
    std::cout << Paco.getNombre() << std::endl;
    std::cout << Paco.getEdad() << std::endl;
    std::cout << Paco.getCarrera() << std::endl;
    Paco.setCarrera("Ing. En Programacion de Videojuegos");

    Maestro Zucco("Zucco",22,"Ing. En Programacion de Videojuegos");
    std::cout << Zucco.getNombre() << std::endl;
    Zucco.setCarrera("Cine");

    Amigo Pepe;
    std::cout << Pepe.getNombreCompleto(Juan) << std::endl;
    std::cout << Zucco.getNombreCompleto(Paco) << std::endl;
    return 0;
}
```
POO.md
Mostrando POO.md.
