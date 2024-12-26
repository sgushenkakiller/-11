#ifndef TARIFF_H
#define TARIFF_H

#include <string>
#include <vector>
#include <memory>
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
    void addService(const std::shared_ptr<Service>& service);

    /**
    *@brief Возвращает название тарифа.
    *@return Название тарифа.
    */
    const std::string& getName() const;

    /**
    *@brief Возвращает список услуг тарифа.
    *@return Вектор умных указателей на услуги.
    */
    const std::vector<std::shared_ptr<Service>>& getServices() const;

private:
    std::string name; ///< Название тарифа.
    std::vector<std::shared_ptr<Service>> services; ///< Список услуг тарифа.
};

#endif // TARIFF_H

#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <memory>
#include "Subscriber.h"
#include "Tariff.h"

/**
*@brief Отображает список услуг для заданного тарифа.
*@param tariff - Тариф, услуги которого будут показаны.
*/
void showServices(const Tariff& tariff);

/**
*@brief Отображает список всех тарифов и их услуг.
*@param tariffs - Вектор тарифов для отображения.
*/
void showTariffs(const std::vector<Tariff>& tariffs);

/**
*@brief Отображает список всех абонентов и их тарифов.
*@param subscribers - Вектор абонентов для отображения.
*/
void showSubscribers(const std::vector<Subscriber>& subscribers);

/**
*@brief Показывает самые популярные тарифы среди абонентов.
*@param subscribers - Вектор абонентов для анализа популярности тарифов.
*/
void showMostPopularTariffs(const std::vector<Subscriber>& subscribers);

/**
*@brief Показывает распределение тарифов среди абонентов в процентах.
*@param subscribers - Вектор абонентов для расчёта распределения тарифов.
*/
void showTariffDistribution(const std::vector<Subscriber>& subscribers);

#endif // UTILS_H
