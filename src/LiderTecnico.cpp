#include "LiderTecnico.h"

LiderTecnico::LiderTecnico(std::string nombre, double salarioBase)
    : Empleado(nombre, salarioBase)
{

}

LiderTecnico::~LiderTecnico()
{

}

double LiderTecnico::calcularSalario()
{
    return salarioBase * 1.25;
}
