#ifndef SERVICE_H
#define SERVICE_H

#include <string>
/**
*@brief Класс, представляющий услугу с названием и стоимостью за единицу.
*/
class Service {
public:
    /**
    *@brief Конструктор класса Service.
    *@param name - Название услуги.
    *@param cost_per_unit - Стоимость за единицу услуги.
    */
    Service(const std::string& name, double cost_per_unit);

    /**
    *@brief Возвращает название услуги.
    *@return Название услуги.
    */
    const std::string& getName() const;

    /**
    *@brief Возвращает стоимость за единицу услуги.
    *@return Стоимость за единицу.
    */
    double getCostPerUnit() const;

private:
    /**
    *@brief Название услуги.
    */
    std::string name;

    /**
    *@brief Стоимость за единицу услуги.
    */
    double cost_per_unit;
};

#endif // SERVICE_H

#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <string>
#include "Tariff.h"

/**
*@brief Класс, представляющий абонента с тарифом.
*/
class Subscriber {
public:
    /**
    *@brief Конструктор класса Subscriber.
    *@param name - Имя абонента.
    *@param tariff - Тариф, к которому привязан абонент.
    */
    Subscriber(const std::string& name, const Tariff& tariff);

    /**
    *@brief Возвращает имя абонента.
    *@return Имя абонента.
    */
    const std::string& getName() const;

    /**
    *@brief Возвращает тариф абонента.
    *@return Тариф абонента.
    */
    const Tariff& getTariff() const;

private:
    std::string name; ///< Имя абонента.
    Tariff tariff; ///< Тариф абонента.
};

#endif // SUBSCRIBER_H
