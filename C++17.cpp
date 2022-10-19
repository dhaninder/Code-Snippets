// C++17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <optional>
#include <fstream>

std::optional<std::string> ReadFile(const std::string& file) {
   std::ifstream inFile(file);

   if (inFile) {
      std::string result;
      inFile >> result;

      inFile.close();
      return result;
   }

   return {};
}

int main()
{
    std::cout << "Hello World!\n";
    auto read = ReadFile("Text.txt");

    // if the value is present then val will store that value
    // otherwise val will contain Not Present
    std::string val = read.value_or("Not Present");

    if (read) {
       std::cout << "File opened successfully.\n";
    }
    else {
       std::cout << "File not opened successfully.\n";
    }

    std::cout << val;

    std::cin.get();
}


