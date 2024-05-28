#include <iostream>
#include <string>

struct Empleado {
    std::string DNI;
    std::string nombre;
    std::string apellidos;
    char sexo;
    std::string cargo;
    double salario;
};

std::string categorizarSalario(double salario) {
    if (salario > 2000) {
        return "Alto";
    } else if (salario > 1000) {
        return "Medio";
    } else {
        return "Bajo";
    }
}

int main() {
    int numEmpleados;
    std::cout << "Ingrese el numero de empleados: ";
    std::cin >> numEmpleados;

    Empleado* empleados = new Empleado[numEmpleados];

    for (int i = 0; i < numEmpleados; i++) {
        std::cout << "Ingrese los datos del empleado " << (i + 1) << ":\n";
        std::cout << "DNI: ";
        std::cin >> empleados[i].DNI;
        std::cout << "Nombre: ";
        std::cin >> empleados[i].nombre;
        std::cout << "Apellidos: ";
        std::cin >> empleados[i].apellidos;
        std::cout << "Sexo: ";
        std::cin >> empleados[i].sexo;
        std::cout << "Cargo: ";
        std::cin >> empleados[i].cargo;
        std::cout << "Salario: ";
        std::cin >> empleados[i].salario;

        std::string categoria = categorizarSalario(empleados[i].salario);
        std::cout << "Categoria: " << categoria << std::endl;
        system("cls");
    }

    std::cout << "Datos de los empleados:\n";
    for (int i = 0; i < numEmpleados; i++) {
        std::string categoria = categorizarSalario(empleados[i].salario);
        std::cout << "Empleado " << (i + 1) << ":\n"
                  << "DNI: " << empleados[i].DNI
                  << ", Nombre: " << empleados[i].nombre
                  << ", Apellidos: " << empleados[i].apellidos
                  << ", Sexo: " << empleados[i].sexo
                  << ", Cargo: " << empleados[i].cargo
                  << ", Salario: " << empleados[i].salario
                  << ", Categoria: " << categoria << std::endl;
    }

    

    return 0;
}