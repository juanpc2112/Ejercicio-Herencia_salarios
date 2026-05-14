# Ejercicio-Herencia_salarios
Proyecto desarrollado en C++ utilizando Programación Orientada a Objetos.

El sistema permite gestionar la nómina de distintos tipos de empleados dentro de una empresa de desarrollo de software, aplicando conceptos de:

- Todos los temas dados de POO en el el segundo corte
- Herencia
- Polimorfismo
- Clases abstractas

# Evidencia de ejecución 

Una captura de pantalla o bloque de salida de consola donde se vea la nómina procesada.

![image alt](https://github.com/juanpc2112/Ejercicio-Herencia_salarios/blob/master/Captura%20de%20pantalla%202026-05-13%20191045.png)

El salario calculado para al menos ocho empleados.

![image alt](https://github.com/juanpc2112/Ejercicio-Herencia_salarios/blob/master/Captura%20de%20pantalla%202026-05-13%20191054.png) 

El total de la nómina.

![image alt](https://github.com/juanpc2112/Ejercicio-Herencia_salarios/blob/master/Captura%20de%20pantalla%202026-05-13%20191111.png)

Una tabla con los datos de prueba usados.

| Empleado | Cargo | Salario Base | Operación | Resultado Esperado | Resultado Obtenido |
|---|---|---|---|---|---|
| Carlos | Desarrollador Junior | 2000 | 2000 | 2000 | 2000 |
| Laura | Desarrollador Junior | 2200 | 2200 | 2200 | 2200 |
| Andres | Desarrollador Senior | 4000 | 4000 * 1.20 | 4800 | 4800 |
| Sofia | Desarrollador Senior | 4500 | 4500 * 1.20 | 5400 | 5400 |
| Miguel | Líder Técnico | 6000 | 6000 * 1.25 | 7500 | 7500 |
| Valentina | Líder Técnico | 6500 | 6500 * 1.25 | 8125 | 8125 |
| Camilo | Tester | 2500 | 2500 * 1.05 | 2625 | 2625 |
| Juliana | Tester | 2700 | 2700 * 1.05 | 2835 | 2835 |

# Explicación del diseño

## 1. ¿Cuál es la clase base y por qué?

La clase base es Empleado porque contiene los atributos y comportamientos que todos los empleados comparten, como el nombre, salario base y el método calcularSalario().

## 2. ¿Qué método se sobrescribe en las clases derivadas?

El método que se sobrescribe es:

calcularSalario()

Cada tipo de empleado tiene una forma distinta de calcular su salario dependiendo del bono que recibe.

## 3. ¿Dónde se evidencia el polimorfismo en el programa?

El polimorfismo se evidencia en el vector:

std::vector<Empleado*>

porque allí se almacenan distintos tipos de empleados usando punteros de la clase base. También ocurre cuando se llama:

empleado->calcularSalario()

ya que cada objeto ejecuta su propia versión del método.

## 4. ¿Por qué sería menos adecuado resolver este ejercicio con muchos if o switch para identificar el tipo de empleado?

Porque el código sería más desordenado y difícil de mantener. Con herencia y polimorfismo cada clase se encarga de calcular su propio salario, haciendo el programa más organizado y podemos reutilizar codigo que es algo bueno para todo proyecto.

# Dificultades durante la actividad

## 1. Problema con el polimorfismo y el uso de punteros

El problema estaba relacionado con el polimorfismo y el método:

virtual double calcularSalario() = 0;

Después de revisarlo entendí que el polimorfismo permite tratar todos los empleados como objetos de la clase base, y que al llamar:

empleado->calcularSalario()

cada objeto ejecuta automáticamente su propia versión del método.

## 2. Problema con la herencia y los constructores

Otra dificultad que tuve fue con la herencia. Yo sí sabía que las clases hijas podían heredar los atributos de la clase base, pero no entendía bien cómo hacerlo en el código.

Al principio me costó relacionar correctamente las clases hijas con `Empleado` en los archivos `.h`. Después de hacer la herencia de esta forma:

class DesarrolladorSenior : public Empleado

me fue mucho más fácil entender cómo construir cada clase hija y relacionarlas con la clase madre.

También entendí mejor esta parte:

DesarrolladorSenior::DesarrolladorSenior(std::string nombre, double salarioBase)
    : Empleado(nombre, salarioBase)
    
porque ahí se llama al constructor de la clase base y se inicializan los atributos heredados sin repetir código.

# Opción B: usé IA como apoyo

## Caso 1

Usé IA generativa como apoyo en esta actividad. La utilicé para: explicar un error relacionado con herencia y constructores en las clases hijas.

**Fragmento o idea sugerida por la IA:**  
La IA me explicó cómo relacionar correctamente las clases hijas con la clase base usando:

class DesarrolladorSenior : public Empleado

y también cómo llamar el constructor de la clase padre desde las clases hijas usando:

: Empleado(nombre, salarioBase)

**Qué revisé antes de usarlo:**  
Revisé que los atributos `nombre` y `salarioBase` realmente estuvieran definidos en la clase `Empleado` y confirmé que las clases hijas ya podían acceder a ellos mediante herencia.

**Qué cambié o adapté:**  
Organicé mejor los archivos `.h` y corregí los constructores de todas las clases derivadas para reutilizar correctamente los atributos heredados.


## Caso 2

Usé IA generativa como apoyo en esta actividad. La utilicé para: entender mejor el polimorfismo y el uso de punteros de la clase base.

**Fragmento o idea sugerida por la IA:**  
La IA me explicó por qué se utiliza:

std::vector<Empleado*>

y cómo el método virtual:

virtual double calcularSalario() = 0;

permite que cada empleado ejecute su propia versión del cálculo del salario.

**Qué revisé antes de usarlo:**  
Probé el programa verificando que cada empleado mostrara un salario distinto dependiendo de su tipo, incluso cuando todos estaban almacenados en el mismo vector.

**Qué cambié o adapté:**  
Entendí mejor cómo funcionaba procesarNomina() y adapté el programa para que el cálculo del salario se hiciera usando polimorfismo en lugar de muchos if o switch.
