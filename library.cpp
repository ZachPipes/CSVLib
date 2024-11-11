#include "library.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// Create headers as strings that are equal to 0, 1, 2, 3, etc

// enum class Mode {
//     Read, Write
// };

// Parses through the entire csv file, allows for further manipulation
std::vector<std::string> parse(const std::string& fileName, const char delimiter=',') {
    // Creating return variable and opening the file stream
    std::vector<std::string> parsedFile;
    std::ifstream inputFile(fileName);

    // Error handling
    if(!inputFile) {
        std::cerr << "Error: Could not open file." << std::endl;
    }

    // Parsing the headers
    std::string line;
    std::vector<std::string> headers, body;
    std::getline(inputFile, line);
    std::string token = "";

    for(int i = 0; i < line.size(); i++) {
        if(line[i] != delimiter) {
            token += line[i];
        } else {
            headers.push_back(token);
            token = "";
        }
    }

    // Parsing the rest of the file
    while(getline(inputFile, line)) {
        for(int i = 0; i < line.size(); i++) {
            if(line[i] != delimiter) {
                token += line[i];
            } else {
                body.push_back(token);
                token = "";
            }
        }
    }


    return parsedFile;
}

// Add function for a single entry in csv file

// Prints entire csv file to the console
void print(const std::vector<std::string>& inputFile) {

}
