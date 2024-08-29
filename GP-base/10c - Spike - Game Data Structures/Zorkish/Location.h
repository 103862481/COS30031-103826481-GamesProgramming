#pragma once
#include <string>
#include <vector>

class Item;

class Location
{
public:
    Location();
    Location(std::string a_locationName, std::string a_locationDescription, std::string a_locationConnections);
    ~Location() = default;
    
    std::string GetLocationName();
    std::string GetLocationDescription();
    std::vector<std::string> GetLocationConnections();
    
private:

    void CreateConnections(std::string);
    std::string locationName;
    std::string locationDescription;
    std::vector<std::string> locationConnections;
    std::vector<Item*> locationItems;
    std::vector<std::string> LocationInformation;
};
