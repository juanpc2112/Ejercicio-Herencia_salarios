#ifndef DESARROLLADORJUNIOR_H
#define DESARROLLADORJUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado
{
    public:
        DesarrolladorJunior(std::string nombre, double salarioBase);
        virtual ~DesarrolladorJunior();

        double calcularSalario();
};

#endif // DESARROLLADORJUNIOR_H
