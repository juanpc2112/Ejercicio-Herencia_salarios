#include "DesarrolladorJunior.h"

DesarrolladorJunior::DesarrolladorJunior(std::string nombre, double salarioBase)
    : Empleado(nombre, salarioBase)
{

}

DesarrolladorJunior::~DesarrolladorJunior()
{

}

double DesarrolladorJunior::calcularSalario()
{
    return salarioBase;
}
