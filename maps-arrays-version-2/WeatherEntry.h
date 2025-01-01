#pragma once

#include <string>
#include<map>
#include "WeatherNode.h"

class WeatherEntry{
    public:

        WeatherEntry( double _temprature[],
                  std::string _timestamp);

        void insertWeather(double _temprature, int countryIndex,
                                     std::string _timestamp);
        static bool compareByTimestamp(WeatherEntry& e1, WeatherEntry& e2)
        {
            return e1.timestamp < e2.timestamp;
        }  
        static bool compareByTempratureAsc(WeatherEntry& e1, WeatherEntry& e2){
            bool status = true;
            for(int i =0; i < 30; i++) {
                if(!(e1.weather[i].getTemprature() < e2.weather[i].getTemprature())){
                    status = false;
                    break;
                }
            }
            return status;
        }
         static bool compareByTempratureDesc(WeatherEntry& e1, WeatherEntry& e2)
        {
            bool status = true;
            for(int i =0; i < 30; i++) {
                if(!(e1.weather[i].getTemprature() > e2.weather[i].getTemprature())){
                    status = false;
                    break;
                }
            }
            return status;
        }

        std::vector<WeatherNode> weather;
        std::map<std::string, std::map<std::string, std::map<std::string, int>>> weatherData;
        std::string timestamp;
        std::string country[29] = {
                                "AT","BE","BG","CH",
                                "CZ","DE","DK","EE",
                                "ES","ES","FI","FR",
                                "GB","GR","HR","HU",
                                "IE","IT","LT","LU",
                                "LV","NL","NO","PL",
                                "PT","RO","SE","SI","SK"
                                };
};
