#ifndef UTILS_H
#define UTILS_H

#include <vector>
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
