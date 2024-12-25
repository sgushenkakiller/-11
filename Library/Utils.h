#ifndef UTILS_H
#define UTILS_H

#include <vector>
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
