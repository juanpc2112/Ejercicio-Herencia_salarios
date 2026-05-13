#ifndef TESTER_H
#define TESTER_H

#include "Empleado.h"

class Tester : public Empleado
{
    public:
        Tester(std::string nombre, double salarioBase);
        virtual ~Tester();

        double calcularSalario();
};

#endif // TESTER_H
