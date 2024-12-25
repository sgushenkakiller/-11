#ifndef TARIFF_H
#define TARIFF_H

#include <string>
#include <vector>
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
    void addService(const Service& service);

    /**
    *@brief ���������� �������� ������.
    *@return �������� ������.
    */
    const std::string& getName() const;

    /**
    *@brief ���������� ������ ����� ������.
    *@return ������ �����.
    */
    const std::vector<Service>& getServices() const;

private:
    std::string name; ///< �������� ������.
    std::vector<Service> services; ///< ������ ����� ������.
};

#endif // TARIFF_H
