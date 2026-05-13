#ifndef NOMINA_H
#define NOMINA_H

#include <vector>

#include "Empleado.h"
#include "View.h"

class Nomina
{
    private:
        std::vector<Empleado*> empleados;

    public:
        Nomina();
        virtual ~Nomina();

        void agregarEmpleado(Empleado* empleado);

        void inicializarDatos();

        void procesarNomina(View& vista);

        double calcularTotalNomina();
};

#endif // NOMINA_H
