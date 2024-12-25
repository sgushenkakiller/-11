#ifndef SERVICE_H
#define SERVICE_H

#include <string>
/**
*@brief �����, �������������� ������ � ��������� � ���������� �� �������.
*/
class Service {
public:
    /**
    *@brief ����������� ������ Service.
    *@param name - �������� ������.
    *@param cost_per_unit - ��������� �� ������� ������.
    */
    Service(const std::string& name, double cost_per_unit);

    /**
    *@brief ���������� �������� ������.
    *@return �������� ������.
    */
    const std::string& getName() const;

    /**
    *@brief ���������� ��������� �� ������� ������.
    *@return ��������� �� �������.
    */
    double getCostPerUnit() const;

private:
    /**
    *@brief �������� ������.
    */
    std::string name;

    /**
    *@brief ��������� �� ������� ������.
    */
    double cost_per_unit;
};

#endif // SERVICE_H

#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <string>
#include "Tariff.h"

/**
*@brief �����, �������������� �������� � �������.
*/
class Subscriber {
public:
    /**
    *@brief ����������� ������ Subscriber.
    *@param name - ��� ��������.
    *@param tariff - �����, � �������� �������� �������.
    */
    Subscriber(const std::string& name, const Tariff& tariff);

    /**
    *@brief ���������� ��� ��������.
    *@return ��� ��������.
    */
    const std::string& getName() const;

    /**
    *@brief ���������� ����� ��������.
    *@return ����� ��������.
    */
    const Tariff& getTariff() const;

private:
    std::string name; ///< ��� ��������.
    Tariff tariff; ///< ����� ��������.
};

#endif // SUBSCRIBER_H
