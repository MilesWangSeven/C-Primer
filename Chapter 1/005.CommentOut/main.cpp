#include <iostream>
/* Simple main function: Read two numbers and write them sum*/
int main()
{
    //prompt user to input two numbers
    std::cout << "Input two numbers :" << std::endl;
    int v1, v2;           //uninitialized
    std::cin >> v1 >> v2; //read input
    std::cout << "The sum is : " << v1 + v2;
    return 0;
}