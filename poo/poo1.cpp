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

// Sobrecarga
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
