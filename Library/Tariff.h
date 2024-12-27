#ifndef TARIFF_H
#define TARIFF_H

#include <string>
#include <vector>
#include <memory>
#include "Service.h"

/**
*@brief Шаблонный класс, представляющий тариф с набором услуг.
*@tparam T Тип данных, используемый для хранения услуг.
*/
template <typename T>
class Tariff {
public:
    /**
    *@brief Конструктор класса Tariff.
    *@param name - Название тарифа.
    */
    Tariff(const std::string& name) : name(name) {}

    /**
    *@brief Добавляет услугу в тариф.
    *@param service - Услуга для добавления.
    */
    void addService(const std::shared_ptr<T>& service) {
        services.push_back(service);
    }

    /**
    *@brief Возвращает название тарифа.
    *@return Название тарифа.
    */
    const std::string& getName() const {
        return name;
    }

    /**
    *@brief Возвращает список услуг тарифа.
    *@return Вектор умных указателей на услуги.
    */
    const std::vector<std::shared_ptr<T>>& getServices() const {
        return services;
    }

private:
    std::string name; ///< Название тарифа.
    std::vector<std::shared_ptr<T>> services; ///< Список услуг тарифа.
};

#endif // TARIFF_H

#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <memory>
#include "Subscriber.h"
#include "Tariff.h"

/**
*@brief Шаблонная функция отображает список услуг для заданного тарифа.
*@tparam T Тип данных, используемый в тарифе.
*@param tariff - Тариф, услуги которого будут показаны.
*/
template <typename T>
void showServices(const Tariff<T>& tariff) {
    std::cout << "Services for tariff: " << tariff.getName() << std::endl;
    for (const auto& service : tariff.getServices()) {
        std::cout << service->getName() << " - " << service->getCostPerUnit() << " per unit" << std::endl;
    }
}

/**
*@brief Шаблонная функция отображает список всех тарифов и их услуг.
*@tparam T Тип данных, используемый в тарифе.
*@param tariffs - Вектор тарифов для отображения.
*/
template <typename T>
void showTariffs(const std::vector<Tariff<T>>& tariffs) {
    std::cout << "Tariffs and their services:" << std::endl;
    for (const auto& tariff : tariffs) {
        std::cout << "Tariff: " << tariff.getName() << std::endl;
        for (const auto& service : tariff.getServices()) {
            std::cout << "  - " << service->getName() << " (" << service->getCostPerUnit() << " per unit)" << std::endl;
        }
    }
}

#endif // UTILS_H
