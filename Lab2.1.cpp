#include <iostream>
#include <fstream>
#include <vector>

int main() {
    setlocale(LC_ALL, "ru");
    std::ifstream inputFile("C:/Users/Дениска/Desktop/a.txt");
    if (!inputFile) {
        std::cerr << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    double number;
    int zeroCount = 0;
    double negativeSum = 0.0;

    while (inputFile >> number) {
        if (number == 0.0) {
            zeroCount++;
        }
        if (number < 0.0) {
            negativeSum += number;
        }
    }

    inputFile.close();

    std::cout << "Количество нулевых элементов: " << zeroCount << std::endl;
    std::cout << "Сумма отрицательных элементов: " << negativeSum << std::endl;

    return 0;
}