#ifndef LIDERESTECNICO_H
#define LIDERESTECNICO_H

#include "Empleado.h"

class LideresTecnicos : public Empleado
{
    public:
        LiderTecnico(std::string nombre, double salarioBase);
        virtual ~LiderTecnico();

        double calcularSalario();
};

#endif // LIDERTECNICO_H
