#include "Service.h"

/**
 * @brief Конструктор класса Service.h
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
 *
 * @param name - Имя абонента.
 * @param tariff - Тариф абонента.
 */
Subscriber::Subscriber(const std::string& name, const Tariff& tariff)
    : name(name), tariff(tariff) {}

/**
 * @brief Возвращает имя абонента.
 *
 * @return const std::string& - Имя абонента.
 */
const std::string& Subscriber::getName() const {
    return name;
}

/**
 * @brief Возвращает тариф абонента.
 *
 * @return const Tariff& - Тариф абонента.
 */
const Tariff& Subscriber::getTariff() const {
    return tariff;
}

#include "Tariff.h"

/**
 * @brief Конструктор класса Tariff.
 *
 * @param name - Название тарифа.
 */
Tariff::Tariff(const std::string& name) : name(name) {}

/**
 * @brief Добавляет услугу к тарифу.
 *
 * @param service - Услуга для добавления.
 */
void Tariff::addService(const Service& service) {
    services.push_back(service);
}

/**
 * @brief Возвращает название тарифа.
 *
 * @return const std::string& - Название тарифа.
 */
const std::string& Tariff::getName() const {
    return name;
}

/**
 * @brief Возвращает список услуг тарифа.
 * @return const std::vector<Service>& - Список услуг.
 */
const std::vector<Service>& Tariff::getServices() const {
    return services;
}
