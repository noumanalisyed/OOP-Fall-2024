#include "WeatherEntry.h"

WeatherEntry::WeatherEntry( double _temprature[],
                        std::string _timestamp)
: timestamp(_timestamp)
{
    for (int i = 0; i < 30; ++i) {
        WeatherNode weatherNode(_temprature[i], country[i]);
        weather.push_back(weatherNode);
    }
    
}
void WeatherEntry::insertWeather(double _temprature, int countryIndex,
                   std::string _timestamp){
    timestamp = _timestamp;
    WeatherNode weatherNode(_temprature, country[countryIndex]);
    weather.push_back(weatherNode);

}

