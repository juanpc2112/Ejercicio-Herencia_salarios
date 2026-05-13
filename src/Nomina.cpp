#include "Nomina.h"

#include <iostream>

#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"
#include "View.h"

Nomina::Nomina()
{

}

Nomina::~Nomina()
{
    for(Empleado* empleado : empleados)
    {
        delete empleado;
    }
}

void Nomina::agregarEmpleado(Empleado* empleado)
{
    empleados.push_back(empleado);
}

void Nomina::inicializarDatos()
{
    agregarEmpleado(
        new DesarrolladorJunior("Carlos", 2000)
    );

    agregarEmpleado(
        new DesarrolladorJunior("Laura", 2200)
    );

    agregarEmpleado(
        new DesarrolladorSenior("Andres", 4000)
    );

    agregarEmpleado(
        new DesarrolladorSenior("Sofia", 4500)
    );

    agregarEmpleado(
        new LiderTecnico("Miguel", 6000)
    );

    agregarEmpleado(
        new LiderTecnico("Valentina", 6500)
    );

    agregarEmpleado(
        new Tester("Camilo", 2500)
    );

    agregarEmpleado(
        new Tester("Juliana", 2700)
    );
}
void Nomina::procesarNomina(View& vista)
{
    for(Empleado* empleado : empleados)
    {
        vista.mostrarEmpleado(empleado);
    }
}

double Nomina::calcularTotalNomina()
{
    double total = 0;

    for(Empleado* empleado : empleados)
    {
        total += empleado->calcularSalario();
    }

    return total;
}
