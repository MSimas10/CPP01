
#include <iostream>

// Write a program that contains: [X]
//    a. A string variable initialized to "HI THIS IS BRAIN". [X]
//    b. **stringPTR**: a pointer to the string. [X]
//    c. **stringREF**: a reference to the string. [X]
int main()
{
    std::string var_brain =  "HI THIS IS BRAIN";
    std::string* stringPTR = &var_brain;
    std::string& stringREF = var_brain;
    
    std::cout << "The memory address of the string variable:" << &var_brain << std::endl;
	std::cout << "The memory address held by stringPTR: " << &stringPTR<< std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF<< std::endl;
	std::cout << "The value of the string variable: " << var_brain << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR<< std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF<< std::endl;
}