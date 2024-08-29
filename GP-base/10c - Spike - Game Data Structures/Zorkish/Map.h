#pragma once
#include <string>
#include <vector>

class Location;

class Map
{
public:
    Map(std::string a_file);
    ~Map() = default;

    std::vector<Location*>GetMapLocations();
    
private:

    void CreateLocations();
    std::vector<std::string> locationInformation;
    std::vector<Location*> LocationsArray;
};
