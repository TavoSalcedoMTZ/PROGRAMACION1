//DEFINE LIBRERÍA
#ifndef SEGURO_H
//DEFINE LIBRERÍA
#define SEGURO_H
//IMPORTA LIBRERÍAS
#include <iostream>
#include <string>
//CREA LA CLASE PERSONA
class persona {
public:
    //CREA CONSTRUCTOR DE LA CLASE
    persona(){
        this->maximomonto=0;
        this->deducible=0;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void getName() {
        std::cout << "Ingresa el nombre" << std::endl;
        std::cin >> nombre;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void getCurp() {
        std::cout << "Ingresa el curp" << std::endl;
        std::cin >> curp;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void getFecha() {
        std::cout << "Ingresa la fecha de nacimiento con formato dd/mm/aaaa" << std::endl;
        std::cin>>dianac[2]>>mesnac[2]>>anonac[4];
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void getSangre() {
        std::cout << "Ingresa el tipo de sangre" << std::endl;
        std::cin >> tipodesangre;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void getEnfermo(){
        std::cout<<"¿ Estas enfermo y/n ?"<<std::endl;
        std::cin>>compro;
        if (compro=='y'||compro=='Y'){
            this->compro=compro;
        }
        else if (compro=='n'||compro=='N'){
            this->compro=compro;
        }
        else {
            std::cout<<"Error al ingresar opcion, vuelve a intentarlo"<<std::endl;
            getEnfermo();
        }
    }
    //CREA FUNCIÓN QUE INVOCA LAS DEMAS FUNCIONES
    void ingresarDatos() {
        std::cout << "Ingresa los datos" << std::endl << std::endl;
        getName();
        getCurp();
        getFecha();
        getSangre();
        getEnfermo();
    }
    //CREA FUNCIÓN DE ASIGNACION DE MONTO Y DEDUCIBLE
    void montomaximo(){
        std::cout<<"Ingresa Monto Maximo de Seguro"<<std::endl;
        std::cin>>maximomonto;
        deducible=maximomonto*.10;
    }
    //CREA ASIGNACIÓN QUE IMPRIME LOS DATOS DE LA PÓLIZA
    void getPoliza(){
        std::cout<<"Poliza de seguro de vida"<<std::endl<<std::endl;
        std::cout<<"Nombre : "<<nombre<<std::endl;
        std::cout<<"Edad : "<<edad<<std::endl;
        std::cout<<"Curp : "<<curp<<std::endl;
        std::cout<<"Fecha de nacimiento : "<<dianac[2]<<"/"<<mesnac[2]<<"/"<<anonac[4]<<std::endl;
        std::cout<<"Tipo de sangre : "<<tipodesangre<<std::endl;
        std::cout<<"¿Esta enfermo? : "<<compro<<std::endl;
        std::cout<<"Su monto maximo es de : "<<maximomonto<<std::endl;
        std::cout<<"Su deducible es de : "<<deducible<<std::endl<<std::endl<<std::endl;

    }
    //DECLARA VARIABLES PROTEGIDAS
protected:
    std::string nombre;
    std::string curp;
    std::string fechanac;
    std::string tipodesangre;
    float maximomonto;
    float deducible;
    char compro;
    int anonac[4];
    int mesnac[2];
    int dianac[2];
    int edad;
    //LE DA ACCESO FRIEND A LA CLASE PRINCIPAL
    friend class polizaSeguro;
};
//CREA LA CLASE VIVIENDA
class vivienda{
public:
    //CONSTRUCTOR DE CLASE VIVIENDA
    vivienda(){
        this->maximomonto1=0;
        this->deducible1=0;
    }

    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setDireccion(){
        std::cout<<"Ingresa direccion de la casa"<<std::endl;
        std::cin>>direccion;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setTamano(){
        std::cout<<"Ingresa metros cuadrados de la casa"<<std::endl;
        std::cin>>tamano;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setAnoconstruc(){
        std::cout<<"Ingresa año de construccion"<<std::endl;
        std::cin>>construcano;
    }
    //CREA FUNCIÓN DE QUE INVOCA A LAS DEMAS FUNCIONES
    void ingresarDatosCasa() {
        std::cout << "Ingresa los datos" << std::endl << std::endl;
        setDireccion();
        setTamano();
        setAnoconstruc();
    }
    //CREA FUNCIÓN DE ASIGNACION DE MONTO Y DEDUCIBLE
    void montomaximo1(){
        std::cout<<"Ingresa Monto Maximo de Seguro"<<std::endl;
        std::cin>>maximomonto1;
        deducible1=maximomonto1*.10;
    }
    //DECLARA VARIABLES PROTEGIDAS
protected:
    std::string direccion;
    float tamano;
    int construcano;
    float maximomonto1;
    float deducible1;
    //LE DA ACCESS FRIEND A LA CLASE PRINCIPAL
    friend class polizaSeguro;
};
//CREA CLASE VEHICULO
class vehiculo{
public:
    //CREA EL CONSTRUCTOR DE CLASE
    vehiculo(){
        this->maximomonto2=0;
        this->deducible2=0;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setAnocarro(){
        std::cout<<"Ingresa el año del vehiculo"<<std::endl;
        std::cin>>anovehiculo;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setKilometraje(){
        std::cout<<"Ingresa kilometraje"<<std::endl;
        std::cin>>kilometraje;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setModelo(){
        std::cout<<"Ingresa modelo del vehiculo"<<std::endl;
        std::cin>>modelo;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setMarca(){
        std::cout<<"Ingresa marca del vehiculo"<<std::endl;
        std::cin>>marca;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setNumeroDeSerie(){
        std::cout<<"Ingresa numero de serie"<<std::endl;
        std::cin>>numeroserie;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setPlaca(){
        std::cout<<"Ingresa la placa del vehiculo"<<std::endl;
        std::cin>>placa;
    }
    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void setColor(){
        std::cout<<"Ingresa el color del vehiculo"<<std::endl;
        std::cin>>color;
    }
    //CREA FUNCIÓN QUE INVOCA OTRAS FUNCIONES
    void ingresarDatosAuto(){
        setAnocarro();
        setKilometraje();
        setModelo();
        setMarca();
        setNumeroDeSerie();
        setPlaca();
        setColor();
    }
    //CREA FUNCIÓN DE ASIGNACION DE MONTO Y DEDUCIBLE
    void montomaximo2(){
        std::cout<<"Ingresa Monto Maximo de Seguro"<<std::endl;
        std::cin>>maximomonto2;
        deducible2=maximomonto2*.10;
    }
    //DECLARA FUNCIONES PROTEGIDAS
protected:
    int anovehiculo;
    int kilometraje;
    std::string modelo;
    std::string marca;
    std::string numeroserie;
    std::string placa;
    std::string color;
    float maximomonto2;
    float deducible2;

    //LE CONCEDE ACCESO FRIEND A LA CLASE PRINCIPAL
    friend class polizaSeguro;

};

//CREA CLASE polizaSeguro CON HERENCIA DE LAS DEMAS CLASES
class polizaSeguro : public persona, public vivienda, public vehiculo{


public:
    //CREA CONSTRUCTOR DE CLASE
    polizaSeguro(): persona(), vivienda(), vehiculo(){
        this->opcion=opcion;
        this->anocre[4]=anocre[4];
        this->mescre[2]=mescre[2];
        this->diacre[2]=diacre[2];
    }


    //CREA FUNCIÓN DE PEDIDA DE DATOS
    void fechaCreacion(){
        std::cout<<"Ingresa fecha de registro (dd/mm/aaaa)"<<std::endl;
        std::cin>>diacre[2]>>mescre[2]>>anocre[4];
    }
    //CREA FUNCIÓN DE CALCULO DE EDAD
    void getEdad(){
        edad=anocre[4]-anonac[4];
    }
    //CREA FUNCIÓN QUE IMPRIME DATOS DE LA POLIZA CASA
    void getPolizaCasa(){
        std::cout<<"Poliza de seguro de casa"<<std::endl<<std::endl;
        std::cout<<"Nombre : "<<nombre<<std::endl;
        std::cout<<"Curp : "<<curp<<std::endl;
        std::cout<<"Direccion de la casa : "<<direccion<<std::endl;
        std::cout<<"Año de la casa : "<<construcano<<std::endl;
        std::cout<<"Tamaño de la propiedad : "<<tamano<<std::endl;
        std::cout<<"Su monto maximo es de : "<<maximomonto1<<std::endl;
        std::cout<<"Su deducible es de : "<<deducible1<<std::endl<<std::endl<<std::endl;
    }
    //CREA FUNCIÓN QUE IMPRIME DATOS DE LA POLIZA AUTO
    void getPolizaAuto(){
        std::cout<<"Poliza de seguro de vehiculo"<<std::endl<<std::endl;
        std::cout<<"Nombre : "<<nombre<<std::endl;
        std::cout<<"Curp : "<<curp<<std::endl;
        std::cout<<"Año de vehiculo : "<<anovehiculo<<std::endl;
        std::cout<<"Kilometraje : "<<kilometraje<<std::endl;
        std::cout<<"Modelo : "<<modelo<<std::endl;
        std::cout<<"Marca : "<<marca<<std::endl;
        std::cout<<"Numero de serie : "<<numeroserie<<std::endl;
        std::cout<<"Placa : "<<placa<<std::endl;
        std::cout<<"Color : "<<color<<std::endl;
        std::cout<<"Su monto maximo es de : "<<maximomonto2<<std::endl;
        std::cout<<"Su deducible es de : "<<deducible2<<std::endl<<std::endl<<std::endl;
    }
    //CREA FUNCIÓN QUE PIDE DATOS PARA MENU
    void pedidamenu() {
        std::cout <<"1- Realizar poliza de seguro de una persona" << std::endl
                  << "2- Realiza poliza de seguro  del hogar" << std::endl
                  << "3- Realiza poliza de seguro de un vehiculo" << std::endl
                  << "4- Salir" << std::endl << std::endl<<std::endl<<std::endl;
        std::cin >> opcion;
    }
    //CREA FUNCIÓN QUE DA MENU DE POLIZA PERSONA
    void polizaPersona(){
        std::cout<<std::endl<<std::endl << "1- Ingresar datos de la persona" << std::endl
                 << "2- Ingresar Monto maximo de seguro" << std::endl
                 << "3- Obtener La poliza"<<std::endl
                 << "4- Salir" <<std::endl;
        std::cin>>opcion;
        switch (opcion) {
            case 1:
                fechaCreacion();
                ingresarDatos();
                getEdad();
                polizaPersona();
            case 2:
                montomaximo();
                std::cout<<"Tu deducible es de el 10% = "<< deducible <<std::endl;
                polizaPersona();
            case 3:
                getPoliza();
                polizaPersona();
            case 4:
                pedidamenu();
                menu();
        }
    }
    //CREA FUNCIÓN QUE DA MENU DE POLIZA CASA
    void polizaCasa(){
        std::cout<<std::endl<<std::endl << "1- Ingresar datos de la casa" << std::endl
                 << "2- Ingresar Monto maximo de seguro" << std::endl
                 << "3- Obtener La poliza"<<std::endl
                 << "4- Salir" <<std::endl;
        std::cin>>opcion;
        switch (opcion) {
            case 1:
                fechaCreacion();
                ingresarDatosCasa();
                polizaCasa();
            case 2:
                montomaximo1();
                std::cout<<"Tu deducible es de el 10% = "<< deducible1 <<std::endl;
                polizaCasa();
            case 3:
                getPolizaCasa();
                polizaCasa();
            case 4:
                pedidamenu();
                menu();
        }
    }
    //CREA FUNCIÓN QUE DA MENU DE POLIZA VEHICULO
    void polizaVehiculo(){
        std::cout<<std::endl<<std::endl << "1- Ingresar datos del vehiculo" << std::endl
                 << "2- Ingresar Monto maximo de seguro" << std::endl
                 << "3- Obtener La poliza"<<std::endl
                 << "4- Salir" <<std::endl;
        std::cin>>opcion;
        switch (opcion) {
            case 1:
                fechaCreacion();
                ingresarDatosAuto();
                polizaVehiculo();
            case 2:
                montomaximo2();
                std::cout<<"Tu deducible es de el 10% = "<< deducible2 <<std::endl;
                polizaVehiculo();
            case 3:
                getPolizaAuto();
                polizaVehiculo();
            case 4:
                pedidamenu();
                menu();
        }
    }
    //CREA FUNCIÓN QUE HACE EL MENU PRINCIPAL
    void menu(){
        switch (opcion) {
            case 1:
                std::cout << "Realizar poliza de seguro de una persona" <<std::endl<<std::endl;
                polizaPersona();
                break;
            case 2:
                std::cout << "Realiza poliza de seguro del hogar" << std::endl;
                polizaCasa();
                break;
            case 3:
                std::cout << "Realiza poliza de seguro de un vehiculo" << std::endl;
                polizaVehiculo();
                break;
            case 4:
                break;
            default:
                std::cout << "Opción no válida" << std::endl;
                break;
        }
    }
    //DECLARA VARIABLES PRIVADAS
private:
    int opcion;
    int anocre[4];
    int diacre[2];
    int mescre[2];
};
//CIERRA DEFINICION DE LIBRERIA
#endif

