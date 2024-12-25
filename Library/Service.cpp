#include "Service.h"

/**
 * @brief Конструктор класса Service.
 * @param name - название услуги.
 * @param cost_per_unit - стоимость за единицу услуги.
 */
Service::Service(const std::string& name, double cost_per_unit)
    : name(name), cost_per_unit(cost_per_unit) {}

/**
 * @brief Возвращает название услуги.
 * @return const std::string& - Название услуги.
 */
const std::string& Service::getName() const {
    return name;
}

/**
 * @brief Возвращает стоимость за единицу услуги.
 * @return double - Стоимость за единицу.
 */
double Service::getCostPerUnit() const {
    return cost_per_unit;
}
