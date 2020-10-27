#include <iostream>
#include <algorithm>
#include <ranges>

int main()
{
    std::string names[] =
        {
            "Majeda", "Samer", "Shatha", "Adham", "Sahem",
            "Fayek", "Lamar", "Essa", "Miral",
            "Natasha", "William"};

    for (auto name : names)
        std::cout << name << ' ';
    std::cout << '\n';
    std::cout << '\n';

    double salaries[] =
        {
            1123.23, 3283.18, 4567.56, 2389.54,
            5456.68, 4523.76, 4567.86, 9089.90,
            5817.45, 4751.53, 1495.51};

    for (auto salary : salaries)
        std::cout << salary << ' ';
    std::cout << '\n';
    std::cout << '\n';

    auto updated_salaries = salaries | std::views::transform([](auto salary) { return salary * 1.35; });

    auto sum = salaries | std::ranges::

                                  for (auto new_salary : updated_salaries) std::cout
                              << new_salary << ' ';
    std::cout << '\n';
    std::cout << '\n';
}