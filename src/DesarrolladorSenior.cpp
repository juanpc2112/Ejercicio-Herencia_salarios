#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(std::string nombre, double salarioBase)
    : Empleado(nombre, salarioBase)
{

}

DesarrolladorSenior::~DesarrolladorSenior()
{

}

double DesarrolladorSenior::calcularSalario()
{
    return salarioBase * 1.20;
}
