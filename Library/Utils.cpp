#include "Service.h"
/**
*@brief ����������� ������ Service.
*@param name - �������� ������.
*@param cost_per_unit - ��������� �� ������� ������.
*/
Service::Service(const std::string& name, double cost_per_unit)
    : name(name), cost_per_unit(cost_per_unit) {}
/**
*@brief ���������� �������� ������.
*@return �������� ������.
*/
const std::string& Service::getName() const {
    return name;
}
/**
*@brief ���������� ��������� �� ������� ������.
*@return ��������� �� �������.
*/
double Service::getCostPerUnit() const {
    return cost_per_unit;
}
#include "Subscriber.h"
/**
*@brief ����������� ������ Subscriber.
*@param name - ��� ��������.
*@param tariff - ����� ��������.
*/
Subscriber::Subscriber(const std::string& name, const Tariff& tariff)
    : name(name), tariff(tariff) {}
/**
*@brief ���������� ��� ��������.
*@return ��� ��������.
*/
const std::string& Subscriber::getName() const {
    return name;
}
/**
*@brief ���������� ����� ��������.
*@return ����� ��������.
*/
const Tariff& Subscriber::getTariff() const {
    return tariff;
}
#include "Tariff.h"
/**
*@brief ����������� ������ Tariff.
*@param name - �������� ������.
*/
Tariff::Tariff(const std::string& name) : name(name) {}
/**
*@brief ��������� ������ � ������.
*@param service - ������ ��� ����������.
*/
void Tariff::addService(const Service& service) {
    services.push_back(service);
}
/**
*@brief ���������� �������� ������.
*@return �������� ������.
*/
const std::string& Tariff::getName() const {
    return name;
}
/**
*@brief ���������� ������ ����� ������.
*@return ������ �����.
*/
const std::vector<Service>& Tariff::getServices() const {
    return services;
}
#include "Utils.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>
/**
*@brief ���������� ������ � ������.
*@param tariff - �����, ������ �������� ����� ��������.
*/
void showServices(const Tariff& tariff) {
    std::cout << "Services for tariff: " << tariff.getName() << std::endl;
    for (const auto& service : tariff.getServices()) {
        std::cout << service.getName() << " - " << service.getCostPerUnit() << " per unit" << std::endl;
    }
}
/**
*@brief ���������� ������ ������� � �� ������.
*@param tariffs - ������ ������� ��� �����������.
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
*@brief ���������� ������ ���������.
*@param subscribers - ������ ��������� ��� �����������.
*/
void showSubscribers(const std::vector<Subscriber>& subscribers) {
    std::cout << "Subscribers list:" << std::endl;
    for (const auto& subscriber : subscribers) {
        std::cout << subscriber.getName() << " is subscribed to " << subscriber.getTariff().getName() << " tariff" << std::endl;
    }
}
/**
*@brief ���������� ����� ���������� ������.
*@param subscribers - ������ ��������� ��� ������� ������������ �������.
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
*@brief ���������� ������������� ������� ����� ���������.
*@param subscribers - ������ ��������� ��� ������� ������������� �������.
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
