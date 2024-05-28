#include <iostream>
#include <string>

struct Contacto {
    std::string nombre;
    int edad;
    std::string direccion;
    std::string ciudad;
    std::string telefono;
};

void mostrarContacto(Contacto contacto) {
    std::cout << "Nombre: " << contacto.nombre << std::endl;
    std::cout << "Edad: " << contacto.edad << std::endl;
    std::cout << "Direccion: " << contacto.direccion << std::endl;
    std::cout << "Ciudad: " << contacto.ciudad << std::endl;
    std::cout << "Telefono: " << contacto.telefono << std::endl;
}

Contacto ingresarContacto() {
    Contacto contacto;
    std::cout << "Ingrese el nombre: ";
    std::getline(std::cin, contacto.nombre);
    std::cout << "Ingrese la edad: ";
    std::cin >> contacto.edad;
    std::cin.ignore();
    std::cout << "Ingrese la direccion: ";
    std::getline(std::cin, contacto.direccion);
    std::cout << "Ingrese la ciudad: ";
    std::getline(std::cin, contacto.ciudad);
    std::cout << "Ingrese el telefono: ";
    std::getline(std::cin, contacto.telefono);
    return contacto;
    
}

int main() {
    int numContactos;
    std::cout << "Ingrese el numero de contactos que desea ingresar: ";
    std::cin >> numContactos;
    std::cin.ignore();

    for (int i = 0; i < numContactos; i++) {
        Contacto contacto = ingresarContacto();
        system("cls");
        mostrarContacto(contacto);
        
    }
    return 0;
}