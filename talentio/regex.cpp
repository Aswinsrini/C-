#include <iostream>
#include <regex>

int main() {
    std::string a = "daAKcdpK";
    std::regex pattern("[a-z]*[aA][a-z]*[^A-Z]");

    if (std::regex_search(a, pattern)) {
        std::cout << "String contains 'a' or 'A'" << std::endl;
    } else {
        std::cout << "String does not contain 'a' or 'A'" << std::endl;
    }

    return 0;
}
