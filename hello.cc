// #include <iostream>
//     auto natural_numbers = std::views::iota(1);
//     auto multiple_by_two = [] (int number) {return number * 2;};
//     auto inverses = [](int number) {return 1.00 / (static_cast<double>(number)) ;};
    
//     auto even_numbers = natural_numbers | std::views::transform(multiple_by_two);
//     for (auto i :  even_numbers | std::views::take(10))
//         std::cout << i << ' ';
//     std::cout << '\n';

//     auto numbers = natural_numbers | std::views::transform(inverses);
//     for (auto i :  numbers | std::views::take(10))
//         std::cout << i << ' ';
//     std::cout << '\n';

// #include <ranges>
// #include <algorithm>

// #include <string>
// #include <string_view>

// std::ranges::sort(our_names);
// auto salaries = 
// items | std::views::transform([](auto salary)  { return static_cast<double>(salary)  * 10.125;});
    