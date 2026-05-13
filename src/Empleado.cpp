#include "Empleado.h"

Empleado::Empleado(std::string nombre, double salarioBase)
{
    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

Empleado::~Empleado()
{

}

std::string Empleado::getNombre()
{
    return nombre;
}

double Empleado::getSalarioBase()
{
    return salarioBase;
}
