#include <iostream>
#include <algorithm>

auto endline = []() -> void { std::cout << '\n'; }; //== !=

int main()
{
    std::string names[] = {...};

    std::ranges::for_each(names, [](auto item) { std::cout << item << ' '; });
    endline();

    std::ranges::sort(names);
    std::ranges::for_each(names, [](auto item) { std::cout << item << ' '; });
    endline();

    int salaries_in_cents[] = {...};
}
