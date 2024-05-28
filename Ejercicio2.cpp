#include <iostream>
#include <string>

int main() {
    const int TAMANO = 5;
    std::string nombres[TAMANO];
    int edades[TAMANO];
    std::string direcciones[TAMANO];
    std::string ciudades[TAMANO];
    std::string telefonos[TAMANO];

    for (int i = 0; i < TAMANO; i++) {
        std::cout << "Ingrese el nombre de la persona " << i+1 << ": ";
        std::getline(std::cin, nombres[i]);

        std::cout << "Ingrese la edad de la persona " << i+1 << ": ";
        std::cin >> edades[i];
        std::cin.ignore();  // Ignora el carácter de nueva línea en el buffer de entrada

        std::cout << "Ingrese la direccion de la persona " << i+1 << ": ";
        std::getline(std::cin, direcciones[i]);

        std::cout << "Ingrese la ciudad de la persona " << i+1 << ": ";
        std::getline(std::cin, ciudades[i]);

        std::cout << "Ingrese el telefono de la persona " << i+1 << ": ";
        std::getline(std::cin, telefonos[i]);
        system("cls");
    }

    // Muestra la información
    for (int i = 0; i < TAMANO; i++) {
        std::cout << "\nInformacion de la persona " << i+1 << ":\n";
        std::cout << "Nombre: " << nombres[i] << "\n";
        std::cout << "Edad: " << edades[i] << "\n";
        std::cout << "Direccion: " << direcciones[i] << "\n";
        std::cout << "Ciudad: " << ciudades[i] << "\n";
        std::cout << "Telefono: " << telefonos[i] << "\n";
    }

    return 0;
}