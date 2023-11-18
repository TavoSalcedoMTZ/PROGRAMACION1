#include <iostream>
#include <string>

class Alumno {
public:
    Alumno(std::string nombre, int grupo, float calificacion) {
        this->nombre = nombre;
        this->grupo = grupo;
        this->calificacion = calificacion;
    }

    std::string getNombre() {
        return nombre;
    }

    int getGrupo() {
        return grupo;
    }
    void estado() {
        std::cout << "Es Alumno" << std::endl;
    }

private:
    std::string nombre;
    int grupo;
    float calificacion;

    friend class Profesor;
};

class Profesor : public Alumno {
public:
    Profesor(std::string nombre, std::string materia) : Alumno(nombre, grupo, calificacion) {
        this->materia = materia;
    }

    std::string getMateria() {
        return materia;
    }

    void estado() {
        std::cout << "Es Profesor" << std::endl;
    }

    class Promedio {
    public:
        float calcular(float a, float b) {
            return (a + b) / 2;
        }

        float calcular(float a, float b, float c) {
            return (a + b + c) / 3;
        }

        float calcular(float a, float b, float c, float d) {
            return (a + b + c + d) / 4;
        }

        float calcular(float a, float b, float c, float d, float e) {
            return (a + b + c + d + e) / 5;
        }
        friend class Profesor;
    };

private:
    std::string materia;
};

int main() {
    Alumno Rick("Rick", 505, 100);
    std::cout << Rick.getNombre() << std::endl;
    std::cout << Rick.getGrupo() << std::endl;
    Rick.estado();

    Profesor Antonio("Antonio", "Informatica");
    std::cout << Antonio.getNombre() << std::endl;
    std::cout << Antonio.getMateria() << std::endl;
    Antonio.estado();

    Profesor::Promedio promedio;
    std::cout << promedio.calcular(60, 100) << std::endl;
    std::cout << promedio.calcular(100, 100, 80) << std::endl;
    std::cout << promedio.calcular(80, 80, 80) << std::endl;

return 0;
}

