#ifndef CSV_LIBRARY_H
#define CSV_LIBRARY_H

#ifdef _WIN32
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT
#endif
#include <vector>
#include <string>

EXPORT std::vector<std::string> parse(const std::string *inputFile, const char *delimiter);

EXPORT void print(const std::vector<std::string>& inputFile);

#endif //CSV_LIBRARY_H
