/*A cpp file for class FleetManager_XmlDataParser which reads the xml file and stores it in its class*/

#include <iostream>
#include <string>
#include <map>

// Creating a struct to store the xml data
struct Train
{
    std::string trainNumber;
    std::string sourceStation;
    std::string destinationStation;
};

// Class FleetManager_XmlDataParser

class FleetManager_XmlDataParser
{
    protected:
        std::string m_xml_file_path;
    public:
        std::map<std::string,Train>m_map_trains;
    
}