#include <iostream>

#include "Nomina.h"
#include "View.h"

int main()
{
    Nomina nomina;
    View vista;

    int opcion;

    nomina.inicializarDatos();

    do
    {
        opcion = vista.mostrarMenu();

        switch(opcion)
        {
            case 1:

                vista.mostrarMensaje(
                    "\nEmpleados"
                );

                nomina.procesarNomina(vista);

                break;

            case 2:

                vista.mostrarTotal(
                    nomina.calcularTotalNomina()
                );

                break;

            case 0:

                vista.mostrarMensaje(
                    "\nSaliendo del programa."
                );

                break;

            default:

                vista.mostrarMensaje(
                    "\nOpcion invalida"
                );
        }

    } while(opcion != 0);

    return 0;
}
