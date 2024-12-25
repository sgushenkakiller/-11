#include "Service.h"

/**
 * @brief ����������� ������ Service.
 * @param name - �������� ������.
 * @param cost_per_unit - ��������� �� ������� ������.
 */
Service::Service(const std::string& name, double cost_per_unit)
    : name(name), cost_per_unit(cost_per_unit) {}

/**
 * @brief ���������� �������� ������.
 * @return const std::string& - �������� ������.
 */
const std::string& Service::getName() const {
    return name;
}

/**
 * @brief ���������� ��������� �� ������� ������.
 * @return double - ��������� �� �������.
 */
double Service::getCostPerUnit() const {
    return cost_per_unit;
}
