#include <iostream>
#include <algorithm>

auto endline = []() -> void { std::cout << '\n'; }; //== !=

int main()
{
    std::string names[] = {
        "Majeda", "Samer", "Shatha", "Adham", "Sahem",
        "Fayek", "Lamar", "Essa", "Miral",
        "Natasha", "William"};

    std::ranges::for_each(names, [](auto item) { std::cout << item << ' '; });
    endline();

    std::ranges::sort(names);
    std::ranges::for_each(names, [](auto item) { std::cout << item << ' '; });
    endline();

    int salaries_in_cents[] = {
        1123'23, 3283'18, 4567'56, 2389'54,
        5456'68, 4523'76, 4567'86, 9089'90,
        5817'45, 4751'53, 1495'51};
}
