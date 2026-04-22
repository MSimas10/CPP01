#include "Harl.hpp"

int main(void)
{
    Harl harl; 

    std::cout << "DEBUG mode:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "INFO mode:" << std::endl;
    harl.complain("INFO");

    std::cout << "WARNING mode:" << std::endl;
    harl.complain("WARNING");

    std::cout << "ERROR mode:" << std::endl;
    harl.complain("ERROR");

    std::cout << " NOT_VALID:" << std::endl;
    harl.complain("HMM");

    return (EXIT_SUCCESS);
}