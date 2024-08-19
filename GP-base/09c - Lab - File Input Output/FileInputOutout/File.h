#pragma once

class File
{
public:
    File();
    File(int a_int, float a_float, char a_char);
    ~File() = default;

    void ShowValues();

    void WriteValuesToFile();
    void GetFileSize();
    void ReadValuesFromFile();
    void ReadJSONFile();

    
private:
    void ReadBinaryFile(std::string a_fileName);
    void ReadTextFile(std::string a_fileName);
    
    int integer;
    float floatingPointNum;
    char character;
};
