#ifndef TESTERS_H
#define TESTERS_H
#include "Empleado.h"

class Testers:public Empleado
{
    public:
        Testers();
        virtual ~Testers();
        double calcularSalario();

    protected:

    private:
};

#endif // TESTERS_H
