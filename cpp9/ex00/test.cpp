#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

struct BitcoinData {
    std::string date;
    double value;
};

class BitcoinExchange {
public:
    std::map<std::string, double> parseInput(const std::string& inFile) {
        std::map<std::string, double> bitcoinRecords;
        std::ifstream inputFile(inFile);

        if (inputFile.is_open()) {
            std::string line;
            while (std::getline(inputFile, line)) {
                std::istringstream ss(line);
                std::string dateStr, valueStr;

                // Leer la fecha y el valor de la línea
                if (std::getline(ss, dateStr, '|') && std::getline(ss, valueStr)) {
                    try {
                        double value = std::stod(valueStr);
                        bitcoinRecords[dateStr] = value;
                    } catch (const std::invalid_argument& e) {
                        std::cout << "Error convirtiendo a double en la línea: " << line << std::endl;
                    } catch (const std::out_of_range& e) {
                        std::cout << "Valor fuera de rango en la línea: " << line << std::endl;
                    }
                } else {
                    std::cout << "Error: Formato inválido en la línea: " << line << std::endl;
                }
            }
            inputFile.close();
        } else {
            std::cout << "No se pudo abrir el archivo: " << inFile << std::endl;
        }

        return bitcoinRecords;
    }
};

int main() {
    BitcoinExchange exchange;
    std::string filename = "tu_archivo.txt"; // Reemplaza con el nombre de tu archivo

    std::map<std::string, double> bitcoinData = exchange.parseInput(filename);

    // Ejemplo de cómo acceder a los datos parseados en el map
    for (const auto& pair : bitcoinData) {
        std::cout << "Fecha: " << pair.first << " - Valor: " << pair.second << std::endl;
    }

    return 0;
}

