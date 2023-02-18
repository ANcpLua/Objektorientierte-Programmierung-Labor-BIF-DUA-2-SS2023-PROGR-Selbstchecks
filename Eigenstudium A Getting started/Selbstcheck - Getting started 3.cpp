#include <iostream>

int main() 
{
    int i = 120;
    
    bool myBool = true;
    bool yetAnotherBool = myBool && 10 > 5; // = true

// TODO: Überprüfen Sie auf i > 10 und (&&) auf die von Ihnen definierte boolean Variable
    if (yetAnotherBool < i) {
        std::cout << "Debug Warning!" << std::endl;
    }
   
    std::cout << "Hallo Welt!" << std::endl;
    return 0;
}