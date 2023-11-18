

#include <iostream>
#include <string>
   struct entrar{
      std::string contrasena,usuario;
   };
int main()
{




   entrar verif, accesso;
   verif.usuario="Octa";
   verif.contrasena="12345678";
  
  std::cout<<"Ingresa tu usuario"<<std::endl;
  std::cin>>accesso.usuario;


  std::cout<<"Ingresa tu contraseña"<<std::endl;
  std::cin>>accesso.contrasena;
 
  if(accesso.contrasena==verif.contrasena && accesso.usuario==verif.usuario){
      std::cout<<" Acceso Exitoso"<<std::endl;
  }
  else{
    std::cout<<"Acceso Fallido"<<std::endl;
  }
 




   return 0;
}
