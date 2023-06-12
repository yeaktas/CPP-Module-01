#include <iostream>

int main() {
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "string adress : " << &brain << "\nstringptr adress : " << &stringPTR << std::endl;
    std::cout << "stringREF adress : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "string value : " << brain << "\nstringptr value : " << *stringPTR << std::endl;
    std::cout << "stringREF value : " << stringREF << std::endl;
} 