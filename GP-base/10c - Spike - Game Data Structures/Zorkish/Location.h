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
    
    std::string GetLocationName() const;
    std::string GetLocationDescription() const;
    std::vector<std::string> GetLocationConnections() const;
    
private:

    void CreateConnections(std::string a_locationConnections);
    std::string LocationName;
    std::string LocationDescription;
    std::vector<std::string> LocationConnections;
    std::vector<Item*> LocationItems;
    std::vector<std::string> LocationInformation;
};
