#include <iostream>

int main()
{
    setlocale(LC_ALL, "russian");
    float temperatureInFahrenheit = 0.f;
    float temperatureInCelcia = 0.f;

    std::cout << "Введите градусы по фаренгейту\n";
    std::cin >> temperatureInFahrenheit;

    temperatureInCelcia = (temperatureInFahrenheit - 32.f) * 5.f / 9.f;
    std::cout << "Тепмература в градусах: " << temperatureInCelcia;
}
