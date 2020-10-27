#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

int main()
{
    std::vector names { 
        "Majeda", "Samer", "Shatha", "Adham", "Sahem", 
        "Fayek", "Lamar", "Essa", "Miral", 
        "Natasha", "William"
    };   
    
    // for (auto name : names) std::cout << name << ' ';
    // std::cout << '\n';
    

    std::vector salaries_in_cents {
            112323, 328318, 456756, 238954, 
            545668, 452376, 456786, 908990,
            581745, 475153, 149551
        };

        

    // for (auto salary : salaries_in_cents) std::cout << salary << ' ';
    // std::cout << '\n';
    

    std::transform(std::begin(salaries_in_cents), std::end(salaries_in_cents), std::begin(salaries_in_cents),
            [](auto salary) { return salary * 1.35;});

    // auto salaries_sum = 
    //     std::accumulate(std::begin(salaries_in_cents), 
    //                     std::end(salaries_in_cents), 
    //                     0,  std::plus{});

    std::cout << '\n';
    // std::cout << salaries_sum;
    std::cout << '\n';


    std::map<std::string, int> employees{};

    for( std::string name : names) {
        
        std::back_inserter(employees, std::pair<std::string, int>{name, 0});
        
    }

    for(auto [name, salary] : employees) std::cout << name << " - " << salary << '\n' ;

    
}