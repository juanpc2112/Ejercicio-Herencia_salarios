#include "View.h"

View::View()
{

}

View::~View()
{

}

int View::mostrarMenu()
{
    int opcion;

    std::cout << "\nSISTEMA DE NOMINA"
              << std::endl;

    std::cout << "1. Mostrar empleados"
              << std::endl;

    std::cout << "2. Mostrar total nomina"
              << std::endl;

    std::cout << "0. Salir"
              << std::endl;

    std::cout << "\nSeleccione una opcion: ";

    std::cin >> opcion;

    return opcion;
}

void View::mostrarEmpleado(Empleado* empleado)
{
    std::cout << "Nombre: "
              << empleado->getNombre()
              << std::endl;

    std::cout << "Salario calculado: "
              << empleado->calcularSalario()
              << std::endl;

    std::cout << "-----------------------------"
              << std::endl;
}

void View::mostrarMensaje(std::string mensaje)
{
    std::cout << mensaje << std::endl;
}

void View::mostrarTotal(double total)
{
    std::cout << "\nTOTAL NOMINA: "
              << total
              << std::endl;
}
