#include <iostream>

int main()
{
    std::cout << "Input two nums:";
    std::cout << std::endl;
    int v1, v2;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The numbers ";
    std::cout << v1;
    std::cout << " mul ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
    return 0;
}