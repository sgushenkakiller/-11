#ifndef TARIFF_H
#define TARIFF_H

#include <string>
#include <vector>
#include "Service.h"

/**
*@brief Класс, представляющий тариф с набором услуг.
*/
class Tariff {
public:
    /**
    *@brief Конструктор класса Tariff.
    *@param name - Название тарифа.
    */
    Tariff(const std::string& name);

    /**
    *@brief Добавляет услугу в тариф.
    *@param service - Услуга для добавления.
    */
    void addService(const Service& service);

    /**
    *@brief Возвращает название тарифа.
    *@return Название тарифа.
    */
    const std::string& getName() const;

    /**
    *@brief Возвращает список услуг тарифа.
    *@return Вектор услуг.
    */
    const std::vector<Service>& getServices() const;

private:
    std::string name; ///< Название тарифа.
    std::vector<Service> services; ///< Список услуг тарифа.
};

#endif // TARIFF_H
