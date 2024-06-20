#include <fstream>
#include<iostream>
#include <string>

int main() {
    std::ofstream outFile("example.txt");

    if (outFile.is_open()) {
        outFile << "This is a line.\n";
        outFile << "This is another line.\n";
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }

    std::ifstream inFile("example.txt");
    std::string word;

    if (inFile.is_open()) {
        while (std::getline(inFile, word)) {
            std::cout << word << "\n";
        }
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading.\n";
    }
    return 0;
}
