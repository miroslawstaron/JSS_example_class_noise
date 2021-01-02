#include <iostream>

int main()
{
    char strInput[20]; 
    
    // Lines 8-10 are added in the first commit
    std::cout << "Please enter a string: "; 
    std::cin >> strInput; 
    std::cout << "You entered: " << strInput << std::endl;

    // Lines 13-15 are added in the second commit
    std::cout << "Please enter another string: ";
    std::cin >> strInput;
    std::cout << "You entered: " << strInput << std::endl;
}