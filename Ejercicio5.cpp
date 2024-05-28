#include <iostream>
#include <vector>
#include <algorithm>

struct Estudiante {
    int carnet;
    std::string nombre;
    std::string apellido;
    float notaFinal;
};

void ingresarDatos(std::vector<Estudiante>& estudiantes) {
    int n;
    std::cout << "Ingrese el numero de estudiantes: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        Estudiante estudiante;
        std::cout << "Ingrese el carnet del estudiante " << i+1 << ": ";
        std::cin >> estudiante.carnet;
        std::cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        std::cin >> estudiante.nombre;
        std::cout << "Ingrese el apellido del estudiante " << i+1 << ": ";
        std::cin >> estudiante.apellido;
        std::cout << "Ingrese la nota final del estudiante " << i+1 << ": ";
        std::cin >> estudiante.notaFinal;

        estudiantes.push_back(estudiante);
        system("cls");
    }
}

void imprimirRegistros(const std::vector<Estudiante>& estudiantes) {
    for (const auto& estudiante : estudiantes) {
        std::cout << "Carnet: " << estudiante.carnet << ", Nombre: " << estudiante.nombre << ", Apellido: " << estudiante.apellido << ", Nota Final: " << estudiante.notaFinal << "\n";
    }
}

void notaMasAlta(const std::vector<Estudiante>& estudiantes) {
    float maxNota = 0;
    for (const auto& estudiante : estudiantes) {
        maxNota = std::max(maxNota, estudiante.notaFinal);
    }

    std::cout << "Nota mas alta: " << maxNota << "\n";
    std::cout << "Estudiantes con la nota mas alta:\n";
    for (const auto& estudiante : estudiantes) {
        if (estudiante.notaFinal == maxNota) {
            std::cout << "Carnet: " << estudiante.carnet << ", Nombre: " << estudiante.nombre << ", Apellido: " << estudiante.apellido << "\n";
        }
    }
}

void notaPromedio(const std::vector<Estudiante>& estudiantes) {
    float suma = 0;
    for (const auto& estudiante : estudiantes) {
        suma += estudiante.notaFinal;
    }

    float promedio = suma / estudiantes.size();
    std::cout << "Nota promedio del curso: " << promedio << "\n";
}

int main() {
    std::vector<Estudiante> estudiantes;

    ingresarDatos(estudiantes);
    imprimirRegistros(estudiantes);
    notaMasAlta(estudiantes);
    notaPromedio(estudiantes);

    return 0;
}