#include <iostream>

int main()
{
    std::cout << "Input two nums:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The numbers " << v1 << " mul " << v2
              << " is " << v1 * v2 << std::endl;
    return 0;
}