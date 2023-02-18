#include <iostream>

void readMyName(std::string& text) // TODO: Ergänzen Sie den Parameter
{
    std::cin >> text;

    if (text == "wrong") 
    {
        text = "oopsie";
    }
}

int main
{
    std::string text;
    readMyName(text); // TODO: Lesen Sie die Variable mithilfe der Funktion "readMyName" ein.

    std::cout << "Hello " << text << "!\n";
    return 0;
}