#include <iostream>
#include <algorithm>

auto endline = []() -> void { std::cout << '\n'; }; //== !=
using  R = std::ranges;
int main()
{
    std::string names[] = {...};

    R::for_each(names, [](auto item) { std::cout << item << ' '; });
    endline();

    R::sort(names);
    R::for_each(names, [](auto item) { std::cout << item << ' '; });
    endline();

    int salaries_in_cents[] = {...};
}
