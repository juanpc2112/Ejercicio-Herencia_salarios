#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>

#include "Empleado.h"

class View
{
    public:
        View();
        virtual ~View();

        int mostrarMenu();

        void mostrarEmpleado(Empleado* empleado);

        void mostrarMensaje(std::string mensaje);

        void mostrarTotal(double total);
};

#endif // VIEW_H
