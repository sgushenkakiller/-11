#ifndef TARIFF_H
#define TARIFF_H

#include <string>
#include <vector>
#include <memory>
#include "Service.h"

/**
*@brief �����, �������������� ����� � ������� �����.
*/
class Tariff {
public:
    /**
    *@brief ����������� ������ Tariff.
    *@param name - �������� ������.
    */
    Tariff(const std::string& name);

    /**
    *@brief ��������� ������ � �����.
    *@param service - ������ ��� ����������.
    */
    void addService(const std::shared_ptr<Service>& service);

    /**
    *@brief ���������� �������� ������.
    *@return �������� ������.
    */
    const std::string& getName() const;

    /**
    *@brief ���������� ������ ����� ������.
    *@return ������ ����� ���������� �� ������.
    */
    const std::vector<std::shared_ptr<Service>>& getServices() const;

private:
    std::string name; ///< �������� ������.
    std::vector<std::shared_ptr<Service>> services; ///< ������ ����� ������.
};

#endif // TARIFF_H

#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <memory>
#include "Subscriber.h"
#include "Tariff.h"

/**
*@brief ���������� ������ ����� ��� ��������� ������.
*@param tariff - �����, ������ �������� ����� ��������.
*/
void showServices(const Tariff& tariff);

/**
*@brief ���������� ������ ���� ������� � �� �����.
*@param tariffs - ������ ������� ��� �����������.
*/
void showTariffs(const std::vector<Tariff>& tariffs);

/**
*@brief ���������� ������ ���� ��������� � �� �������.
*@param subscribers - ������ ��������� ��� �����������.
*/
void showSubscribers(const std::vector<Subscriber>& subscribers);

/**
*@brief ���������� ����� ���������� ������ ����� ���������.
*@param subscribers - ������ ��������� ��� ������� ������������ �������.
*/
void showMostPopularTariffs(const std::vector<Subscriber>& subscribers);

/**
*@brief ���������� ������������� ������� ����� ��������� � ���������.
*@param subscribers - ������ ��������� ��� ������� ������������� �������.
*/
void showTariffDistribution(const std::vector<Subscriber>& subscribers);

#endif // UTILS_H
