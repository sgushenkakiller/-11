
#include "CppUnitTest.h"
#include "..\Library\Subscriber.h"
#include "..\Library\Tariff.h"
#include "..\Library\Service.h"
#include "..\Library\Utils.h"
#include <vector>
#include <unordered_map>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ServiceTests
{
    TEST_CLASS(TariffTest)
    {
    public:

        /**
         * @brief Тест проверки добавления услуг в тариф.
         */
        TEST_METHOD(TestServiceList)
        {
            auto internet = std::make_shared<Service>("Internet", 5.0);
            auto phone = std::make_shared<Service>("Phone", 2.5);

            Tariff basicTariff("Basic");
            basicTariff.addService(internet);
            basicTariff.addService(phone);

            auto services = basicTariff.getServices();
            Assert::AreEqual<size_t>(2, services.size());
            Assert::AreEqual(std::string("Internet"), services[0]->getName());
            Assert::AreEqual(5.0, services[0]->getCostPerUnit());
            Assert::AreEqual(std::string("Phone"), services[1]->getName());
        }
    };

    TEST_CLASS(SubscriberTest)
    {
    public:

        /**
         * @brief Тест создания абонента с тарифом.
         */
        TEST_METHOD(TestSubscriberTariff)
        {
            auto internet = std::make_shared<Service>("Internet", 5.0);
            Tariff basicTariff("Basic");
            basicTariff.addService(internet);

            Subscriber sub("Damir", basicTariff);
            Assert::AreEqual(std::string("Damir"), sub.getName());
            Assert::AreEqual(std::string("Basic"), sub.getTariff().getName());
        }
    };

    TEST_CLASS(UtilsTest)
    {
    public:

        /**
         * @brief Тест распределения тарифов.
         */
        TEST_METHOD(TestTariffDistribution)
        {
            auto internet = std::make_shared<Service>("Internet", 5.0);
            auto phone = std::make_shared<Service>("Phone", 2.5);

            Tariff basicTariff("Basic");
            basicTariff.addService(internet);
            basicTariff.addService(phone);

            Tariff premiumTariff("Premium");
            premiumTariff.addService(internet);

            Subscriber sub1("User1", basicTariff);
            Subscriber sub2("User2", premiumTariff);
            Subscriber sub3("User3", basicTariff);

            std::vector<Subscriber> subscribers = { sub1, sub2, sub3 };

            std::unordered_map<std::string, size_t> tariff_count;
            for (const auto& subscriber : subscribers)
            {
                tariff_count[subscriber.getTariff().getName()]++;
            }

            Assert::AreEqual<size_t>(2, tariff_count["Basic"]);
            Assert::AreEqual<size_t>(1, tariff_count["Premium"]);
        }
    };
}
