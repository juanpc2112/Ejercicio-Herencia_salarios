#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>

class Empleado
{
    protected:
        std::string nombre;
        double salarioBase;

    public:
        Empleado(std::string nombre, double salarioBase);
        virtual ~Empleado();

        std::string getNombre();
        double getSalarioBase();

        virtual double calcularSalario() = 0;
};

#endif // EMPLEADO_H
