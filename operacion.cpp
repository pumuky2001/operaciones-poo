# include "operacion.h"
# include "iostream"

void operacion::cargar1() {
    std::cout << "Introduzca valor 1" << std::endl;
    std::cin >> valor1;
}
void operacion::cargar2() {
    std::cout << "introduzca valor 2" << std::endl;
    std::cin >> valor2;
}
void operacion::mostrarResultado() {
    std::cout <<"Resultado" << std::endl;
    std::cout << resultado;
    
};
