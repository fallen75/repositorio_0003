#include <iostream>    // Para entrada/salida estándar (como std::cout).
#include <iomanip>     // Para usar funciones de formateo (como std::put_time).
#include <ctime>       // Para trabajar con fechas y horas (como std::time_t y std::tm).

int main() {
	
	system ("color 0a");
    // Obtener la hora actual
    std::time_t now = std::time(nullptr);
    std::tm *tm_now = std::localtime(&now);

    // Imprimir la hora usando put_time
    std::cout << "Fecha y hora actual: "
              << std::put_time(tm_now, "%Y-%m-%d %H:%M:%S") << std::endl;

    return 0;
}
