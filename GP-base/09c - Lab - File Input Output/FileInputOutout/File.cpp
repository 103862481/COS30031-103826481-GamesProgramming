#include <iostream>
#include <fstream>
#include <string>
#include "File.h"
#include "json.hpp"
#include <locale>

File::File()
{
    integer = 5;
    floatingPointNum = 8.9;
    character = 'L';
}

File::File(int a_int, float a_float, char a_char)
{
    integer = a_int;
    floatingPointNum = a_float;
    character = a_char;
}

void File::ShowValues()
{
    std::cout << "Int: " << integer << " " << "Float: " << floatingPointNum << " " << "Char: " << character << "\n";
}

void File::WriteValuesToFile()
{
    std::ofstream inputFile;
    inputFile.open("Variables.bin");
    if (inputFile.is_open())
    {
        inputFile << integer << " " << floatingPointNum << " " << character << "\n" ;
        inputFile.close();
    }
}

void File::GetFileSize()
{
    std::streampos begin,end;
    std::ifstream inputFile("Variables.bin", std::ios::binary);
    begin = inputFile.tellg();
    inputFile.seekg(0, std::ios::end);
    end = inputFile.tellg();
    inputFile.close();
    std::cout << "The File size is: " << (end-begin) << " bytes.\n";
}

void File::ReadValuesFromFile()
{
    ReadBinaryFile("Variables.bin");
    ReadTextFile("Simple.txt");
}

void File::ReadJSONFile()
{
    std::ifstream file("PlayerData.json");

    nlohmann::json data;
    file >> data;

    std::cout << data;
}

void File::ReadTextFile(std::string a_fileName)
{
    std::string fileLine;
    std::ifstream inputFile(a_fileName);
    if (inputFile.is_open())
    {
        while (std::getline(inputFile, fileLine))
        {
            fileLine.erase(std::remove_if(fileLine.begin(), fileLine.end(), [](unsigned char c)
            {
                return std::isspace(c);
            }), fileLine.end());

            if (fileLine[0] == '#')
            {
                continue;
            }
            std::cout << fileLine << "\n";
        }
        inputFile.close();
    }
}

void File::ReadBinaryFile(std::string a_fileName)
{
    std::string fileLine;
    std::ifstream inputFile(a_fileName, std::ios::binary);
    if (inputFile.is_open())
    {
        while (std::getline(inputFile, fileLine))
        {
            std::cout << fileLine << "\n";
        }
        inputFile.close();
    }
}
