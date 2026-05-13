#ifndef DESARROLLADORSENIOR_H
#define DESARROLLADORSENIOR_H

#include "Empleado.h"

class DesarrolladorSenior : public Empleado
{
    public:
        DesarrolladorSenior(std::string nombre, double salarioBase);
        virtual ~DesarrolladorSenior();

        double calcularSalario();
};

#endif // DESARROLLADORSENIOR_H
