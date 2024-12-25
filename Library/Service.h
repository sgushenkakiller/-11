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
    std::string name; 
    double cost_per_unit;
};

#endif // SERVICE_H
