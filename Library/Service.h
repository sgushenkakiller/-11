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
    std::string name; 
    double cost_per_unit;
};

#endif // SERVICE_H
