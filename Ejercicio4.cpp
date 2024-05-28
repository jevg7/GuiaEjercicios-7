#include <iostream>
#include <vector> // Include the vector library

struct Articulo {
    int Codigo;
    int Nivel_minimo;
    int Nivel_actual;
    std::string Proveedor;
    double Precio;
};

int main() {
    int numArticulos;
    std::cout << "Cuantos articulos desea ingresar? ";
    std::cin >> numArticulos;

    std::vector<Articulo> articulos(numArticulos); // Use a vector instead of dynamic array

    for (int i = 0; i < numArticulos; ++i) {
        std::cout << "Ingrese el código del articulo: ";
        std::cin >> articulos[i].Codigo;
        std::cout << "Ingrese el nivel mínimo del articulo: ";
        std::cin >> articulos[i].Nivel_minimo;
        std::cout << "Ingrese el nivel actual del articulo: ";
        std::cin >> articulos[i].Nivel_actual;
        std::cout << "Ingrese el proveedor del articulo: ";
        std::cin >> articulos[i].Proveedor;
        std::cout << "Ingrese el precio del articulo: ";
        std::cin >> articulos[i].Precio;
        system("cls");

        if (articulos[i].Nivel_actual < articulos[i].Nivel_minimo) {
            std::cout << "Alerta: Hacer Pedido\n";
            std::cout << "Codigo: " << articulos[i].Codigo << "\n";
            std::cout << "Proveedor: " << articulos[i].Proveedor << "\n";
            std::cout << "Precio: " << articulos[i].Precio << "\n";
        }
    }

    // Display the saved data
    std::cout << "Datos guardados:\n";
    for (int i = 0; i < numArticulos; ++i) {
        std::cout << "Articulo " << i + 1 << ":\n";
        std::cout << "Codigo: " << articulos[i].Codigo << "\n";
        std::cout << "Nivel mínimo: " << articulos[i].Nivel_minimo << "\n";
        std::cout << "Nivel actual: " << articulos[i].Nivel_actual << "\n";
        std::cout << "Proveedor: " << articulos[i].Proveedor << "\n";
        std::cout << "Precio: " << articulos[i].Precio << "\n";
    }

    return 0;
}