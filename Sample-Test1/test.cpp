#include "gtest/gtest.h"
#include "../Library/Subscriber.h"
#include "../Library/Tariff.h"
#include "../Library/Service.h"
#include "../Library/Utils.h"
#include <vector>

TEST(TariffTest, TestServiceList) {
    Service internet("Internet", 5.0);
    Service phone("Phone", 2.5);

    Tariff basicTariff("Basic");
    basicTariff.addService(internet);
    basicTariff.addService(phone);

    std::vector<Service> services = basicTariff.getServices();
    ASSERT_EQ(services.size(), 2);
    EXPECT_EQ(services[0].getName(), "Internet");
    EXPECT_EQ(services[1].getName(), "Phone");
}

TEST(SubscriberTest, TestSubscriberTariff) {
    Service internet("Internet", 5.0);
    Service phone("Phone", 2.5);

    Tariff basicTariff("Basic");
    basicTariff.addService(internet);
    basicTariff.addService(phone);

    Subscriber sub("Damir", basicTariff);
    EXPECT_EQ(sub.getName(), "Damir");
    EXPECT_EQ(sub.getTariff().getName(), "Basic");
}

TEST(UtilityTest, TestTariffDistribution) {
    Service internet("Internet", 5.0);
    Service phone("Phone", 2.5
}