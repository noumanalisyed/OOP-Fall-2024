#pragma once

#include "WeatherEntry.h"
#include <vector>
#include <string>
#include<map>


class WeatherCSVReader
{
    public:
    WeatherCSVReader();

     static std::vector<WeatherEntry> readCSV(std::string csvFile);
     static std::vector<std::string> tokenise(std::string csvLine, char separator);

     static WeatherEntry stringsToWeather(std::string tempratureString[],
                                          std::string timestampString);
    std::string extractDate(const std::string& timestamp);
    std::string extractTime(const std::string& timestamp);
    std::string extractCountry(const std::string& strCountry);
private:
     static WeatherEntry stringsToWBE(std::vector<std::string> strings);

};