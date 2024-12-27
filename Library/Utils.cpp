#include "Service.h"
/**
*@brief Конструктор класса Service.
*@param name - Название услуги.
*@param cost_per_unit - Стоимость за единицу услуги.
*/
Service::Service(const std::string& name, double cost_per_unit)
    : name(name), cost_per_unit(cost_per_unit) {}
/**
*@brief Возвращает название услуги.
*@return Название услуги.
*/
const std::string& Service::getName() const {
    return name;
}
/**
*@brief Возвращает стоимость за единицу услуги.
*@return Стоимость за единицу.
*/
double Service::getCostPerUnit() const {
    return cost_per_unit;
}
#include "Subscriber.h"
/**
*@brief Конструктор класса Subscriber.
*@param name - Имя абонента.
*@param tariff - Тариф абонента.
*/
Subscriber::Subscriber(const std::string& name, const Tariff& tariff)
    : name(name), tariff(tariff) {}
/**
*@brief Возвращает имя абонента.
*@return Имя абонента.
*/
const std::string& Subscriber::getName() const {
    return name;
}
/**
*@brief Возвращает тариф абонента.
*@return Тариф абонента.
*/
const Tariff& Subscriber::getTariff() const {
    return tariff;
}
#include "Tariff.h"
/**
*@brief Конструктор класса Tariff.
*@param name - Название тарифа.
*/
Tariff::Tariff(const std::string& name) : name(name) {}
/**
*@brief Добавляет услугу к тарифу.
*@param service - Услуга для добавления.
*/
void Tariff::addService(const Service& service) {
    services.push_back(service);
}
/**
*@brief Возвращает название тарифа.
*@return Название тарифа.
*/
const std::string& Tariff::getName() const {
    return name;
}
/**
*@brief Возвращает список услуг тарифа.
*@return Список услуг.
*/
const std::vector<Service>& Tariff::getServices() const {
    return services;
}
#include "Utils.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>
/**
*@brief Отображает услуги в тарифе.
*@param tariff - Тариф, услуги которого нужно показать.
*/
void showServices(const Tariff& tariff) {
    std::cout << "Services for tariff: " << tariff.getName() << std::endl;
    for (const auto& service : tariff.getServices()) {
        std::cout << service.getName() << " - " << service.getCostPerUnit() << " per unit" << std::endl;
    }
}
/**
*@brief Отображает список тарифов и их услуги.
*@param tariffs - Список тарифов для отображения.
*/
void showTariffs(const std::vector<Tariff>& tariffs) {
    std::cout << "Tariffs and their services:" << std::endl;
    for (const auto& tariff : tariffs) {
        std::cout << "Tariff: " << tariff.getName() << std::endl;
        for (const auto& service : tariff.getServices()) {
            std::cout << "  - " << service.getName() << " (" << service.getCostPerUnit() << " per unit)" << std::endl;
        }
    }
}
/**
*@brief Отображает список абонентов.
*@param subscribers - Список абонентов для отображения.
*/
void showSubscribers(const std::vector<Subscriber>& subscribers) {
    std::cout << "Subscribers list:" << std::endl;
    for (const auto& subscriber : subscribers) {
        std::cout << subscriber.getName() << " is subscribed to " << subscriber.getTariff().getName() << " tariff" << std::endl;
    }
}
/**
*@brief Отображает самые популярные тарифы.
*@param subscribers - Список абонентов для анализа популярности тарифов.
*/
void showMostPopularTariffs(const std::vector<Subscriber>& subscribers) {
    std::unordered_map<std::string, int> tariff_count;
    for (const auto& subscriber : subscribers) {
        tariff_count[subscriber.getTariff().getName()]++;
    }
    std::cout << "Most popular tariffs:" << std::endl;
    for (const auto& entry : tariff_count) {
        std::cout << entry.first << ": " << entry.second << " subscribers" << std::endl;
    }
}
/**
*@brief Отображает распределение тарифов среди абонентов.
*@param subscribers - Список абонентов для анализа распределения тарифов.
*/
void showTariffDistribution(const std::vector<Subscriber>& subscribers) {
    std::unordered_map<std::string, int> tariff_count;
    for (const auto& subscriber : subscribers) {
        tariff_count[subscriber.getTariff().getName()]++;
    }
    int total = subscribers.size();
    std::cout << "Tariff distribution among subscribers:" << std::endl;
    for (const auto& entry : tariff_count) {
        double percentage = (static_cast<double>(entry.second) / total) * 100;
        std::cout << entry.first << ": " << percentage << "%" << std::endl;
    }
}
