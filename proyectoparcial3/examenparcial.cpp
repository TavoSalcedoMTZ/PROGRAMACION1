#include <iostream>
#include <string>

class persona{
public:
        persona(std::string nombre, std::string curp, std::string fechanac, std::string tipodesangre){
            this->nombre= nombre;
            this->curp= curp;
            this->fechanac=fechanac;
            this->tipodesangre=tipodesangre;
        }
        void getName(){
            std::cout<<"Ingresa nombre"<<std::endl;
            std::cin>>nombre;
        }

protected:
    std::string nombre;
    std::string curp;
    std::string fechanac;
    std::string tipodesangre;

     friend class principal;

};

class principal : public persona{

public:
    principal(int opcion):persona(nombre, curp, fechanac, tipodesangre)  {

    };

    void pedidamenu(){
        std::cout << "Ingresa una opción " << std::endl << std::endl
                  << "1-  Realizar poliza de seguro de una persona" << std::endl
                  << "2- Realiza poliza de seguro de un auto" << std::endl
                  << "3- Realiza poliza de seguro del hogar" << std::endl
                  << "4- Salir" << std::endl << std::endl;
        std::cin >> opcion;
    }
    void menu(){
        switch (opcion) {
            case 1: std::cout <<"a"<<std::endl;
            getName();
                break;
            case 2: std::cout <<"b"<<std::endl;
                break;
            case 3: std::cout <<"c"<<std::endl;
                break;
            case 4: std::cout <<"f"<<std::endl;
                break;
        }
    }
private:
    int opcion;

};

int main(){
    principal a;
    a.pedidamenu();
    a.menu();
    return 0;
}