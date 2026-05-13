#include "Tester.h"

Tester::Tester(std::string nombre, double salarioBase)
    : Empleado(nombre, salarioBase)
{

}

Tester::~Tester()
{

}

double Tester::calcularSalario()
{
    return salarioBase * 1.05;
}
