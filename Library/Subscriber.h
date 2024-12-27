
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
    std::string name; 
    Tariff tariff; 
};

#endif // SUBSCRIBER_H
