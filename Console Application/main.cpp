#include <iostream>
#include <vector>
#include "../Library/Subscriber.h"
#include "../Library/Tariff.h"
#include "../Library/Service.h"
#include "../Library/Utils.h"

/**
 * @brief Точка входа в программу.
 *
 * @return int - Код завершения программы.
 */
int main() {

    Service internet("Internet", 5.0);
    Service phone("Phone", 2.5);
    Service tv("TV", 10.0);

    Tariff basicTariff("Basic");
    basicTariff.addService(internet);
    basicTariff.addService(phone);

    Tariff premiumTariff("Premium");
    premiumTariff.addService(internet);
    premiumTariff.addService(phone);
    premiumTariff.addService(tv);

    Subscriber sub1("Damir", basicTariff);
    Subscriber sub2("Maria", premiumTariff);
    Subscriber sub3("Tester", basicTariff);

    std::vector<Subscriber> subscribers = { sub1, sub2, sub3 };
    std::vector<Tariff> tariffs = { basicTariff, premiumTariff };

    showTariffs(tariffs);
    showSubscribers(subscribers);
    showMostPopularTariffs(subscribers);
    showTariffDistribution(subscribers);

    return 0;
}
