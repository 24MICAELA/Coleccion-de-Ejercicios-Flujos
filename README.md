# Coleccion-de-Ejercicios-Flujos



Enunciado: son los mismos ejercicios que std pero los vamos a trabajar con flujos

Ejercicio 1: Lectura y escritura en flujos estándar
Escribe un programa que:

Solicite al usuario ingresar un número por la entrada estándar (std::cin).
Verifique que la entrada sea válida (comprobando el estado del flujo).
Muestre el número ingresado por la salida estándar (std::cout).
Ejercicio 2: Flujos de archivos
Crea un programa que:

Abra un archivo de texto para lectura (por ejemplo, "entrada.txt").
Lea el contenido de este archivo y lo muestre por pantalla.
Abra otro archivo de texto (por ejemplo, "salida.txt") en modo escritura.
Escriba en "salida.txt" una línea de texto adicional.
Verifique en cada paso que los flujos de archivo se abran y operen correctamente.
Ejercicio 3: Formato y manipuladores de flujo
Escribe un programa que:

Lea un número con punto decimal desde la entrada estándar.
Use manipuladores de flujo como std::fixed y std::setprecision para mostrar el número con exactamente dos decimales en la salida estándar.
Ejercicio 4: Uso de stringstream
Crea un programa que:

Lea una línea completa de texto desde la entrada estándar usando std::getline.
Almacene esta línea en un std::stringstream.
Extraiga palabra por palabra desde el std::stringstream y muestre cada palabra en una línea diferente por la salida estándar.
Ejercicio 5: Argumentos de línea de comandos y flujos
Escribe un programa que:

Reciba uno o más argumentos desde la línea de comandos (por ejemplo, ./programa "Hola" "mundo").
Concatene todos los argumentos en una sola cadena separada por espacios.
Escriba esa cadena resultante en un archivo de texto.
Verifique que el archivo se haya abierto correctamente y muestre un mensaje de confirmación por la salida estándar.
Propuesta de Solución
Generalidades

Crea un nuevo proyecto en CLion y añade un archivo main.cpp. Escribe el siguiente código:

#include <iostream>

int main() {
    int num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El número ingresado es: " << num << std::endl;
    return 0;
}
Flujos integrados

Modifica el main.cpp anterior para incluir una cadena:

#include <iostream>
#include <string>

int main() {
    int num;
    std::string text;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "Ingresa un texto: ";
    std::cin >> text;
    std::cout << "El número ingresado es: " << num << "\nEl texto ingresado es: " << text << std::endl;
    return 0;
}
Estado de un flujo

Crea un nuevo proyecto y añade el siguiente código en main.cpp:

#include <iostream>
#include <fstream>

int main() {
    std::ifstream file;
    file.open("example.txt");
    if (!file) {
        std::cerr << "No se pudo abrir el archivo.\n";
    } else {
        std::cout << "El archivo se abrió correctamente.\n";
    }
    file.close();
    return 0;
}
Formato

Modifica el primer programa para mostrar el número con dos decimales:

#include <iostream>
#include <iomanip>

int main() {
    double num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El número ingresado es: " << std::fixed << std::setprecision(2) << num << std::endl;
    return 0;
}
Flujo de archivos

Crea un nuevo proyecto y añade el siguiente código en main.cpp:

#include <iostream>
#include <fstream>

int main() {
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);
    
    std::ofstream file;
    file.open("example.txt");
    if (file) {
        file << text;
        std::cout << "El texto se guardó correctamente.\n";
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";
    }
    file.close();
    return 0;
}
Flujo de cadenas

Crea un nuevo proyecto y añade el siguiente código en main.cpp:

#include <iostream>
#include <sstream>

int main() {
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);

    std::stringstream ss;
    ss << text;
    std::string text_from_ss;
    ss >> text_from_ss;
    std::cout << "El texto desde el flujo de cadena es: " << text_from_ss << std::endl;
    return 0;
}
Argumentos locales

Crea un nuevo proyecto y añade el siguiente código en main.cpp:

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Por favor, proporciona un argumento de texto.\n";
        return 1;
    }

    std::ofstream file;
    file.open("example.txt");
    if (file) {
        file << argv[1];
        std::cout << "El texto se guardó correctamente.\n";
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";
    }
    file.close();
    return 0;
}
Para este último ejercicio, ejecuta el programa desde la terminal con un argumento, por ejemplo: ./myprogram "Hola mundo".
