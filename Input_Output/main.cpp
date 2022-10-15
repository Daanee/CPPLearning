#include <iostream>
#include <string>

int main(){
 /*
    std::cout << "Hello World" << std::endl;
    int age{21};
    std::cout << "Age:" << age << std::endl;
    std::cerr << "Error message" << std::endl;
    std::clog << "Log message" << std::endl;

    int age1;
    std::string name;

    std::cout << "name und age?" << std::endl;
    std::cin >> name >> age1;
    
    std::cout << "hello " << name << " you are " << age1 << " years old" << std::endl;

*/

    //Data with spaces
    int age2;
    std::string full_name;
    
    std::cout << "Enter Full name and age" << std::endl;
    std::getline(std::cin,full_name);
    std::cin >> age2;

    std::cout << "hello " << full_name << " you are " << age2 << " years old" << std::endl;

    std::cout << "Int size: " << sizeof(int) << std::endl;

    auto value{1};
    value = ++value + 1;
    std::cout << "Value = " << value;
    

    return 0;
}
