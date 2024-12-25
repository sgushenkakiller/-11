#include "Service.h"

/**
 * @brief Конструктор класса Service.
 *
 * @param name - Название услуги.
 * @param cost_per_unit - Стоимость за единицу услуги.
 */
Service::Service(const std::string& name, double cost_per_unit)
    : name(name), cost_per_unit(cost_per_unit) {}

/**
 * @brief Возвращает название услуги.
 *
 * @return const std::string& - Название услуги.
 */
const std::string& Service::getName() const {
    return name;
}

/**
 * @brief Возвращает стоимость за единицу услуги.
 *
 * @return double - Стоимость за единицу.
 */
double Service::getCostPerUnit() const {
    return cost_per_unit;
}

#include "Subscriber.h"

/**
 * @brief Конструктор класса Subscriber.
 * @param name - Имя абонента.
 * @param tariff - Тариф абонента.
 */
Subscriber::Subscriber(const std::string& name, const Tariff& tariff)
    : name(name), tariff(tariff) {}

/**
 * @brief Возвращает имя абонента.
 * @return const std::string& - Имя абонента.
 */
const std::string& Subscriber::getName() const {
    return name;
}

/**
 * @brief Возвращает тариф абонента.
 * @return const Tariff& - Тариф абонента.
 */
const Tariff& Subscriber::getTariff() const {
    return tariff;
}
