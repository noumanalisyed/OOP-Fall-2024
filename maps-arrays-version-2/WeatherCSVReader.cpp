#include "WeatherCSVReader.h"
#include <iostream>
#include <fstream>


WeatherCSVReader::WeatherCSVReader() {

}
std::string WeatherCSVReader::extractDate(const std::string& timestamp) {
    return timestamp.substr(0, 10);
    // Assuming timestamp format is "YYYY-MM-DD HH:MM:SS"
}
std::string WeatherCSVReader::extractTime(const std::string& timestamp) {
    return timestamp.substr(11, 8);
    // Assuming timestamp format is "YYYY-MM-DD HH:MM:SS"
}
std::string WeatherCSVReader::extractCountry(const std::string& strCountry) {
    return strCountry.substr(0, 2);
    // Assuming timestamp format is "YYYY-MM-DD HH:MM:SS"
}

std::vector<WeatherEntry> WeatherCSVReader::readCSV(std::string csvFilename) {
    std::vector<WeatherEntry> entries;

    std::ifstream csvFile{csvFilename};
    std::string line;
    if (csvFile.is_open()) {
        while (std::getline(csvFile, line)) {
            try {
                WeatherEntry weatherRecord = stringsToWBE(tokenise(line, ','));
                entries.push_back(weatherRecord);
            } catch (const std::exception &e) {
                std::cout << "CSVReader::readCSV bad data" << std::endl;
            }
        }// end of while
    }

    std::cout << "CSVReader::readCSV read " << entries.size() << " entries" << std::endl;
    return entries;
}

std::vector<std::string> WeatherCSVReader::tokenise(std::string csvLine, char separator) {
    std::vector<std::string> tokens;
    signed int start, end;
    std::string token;
    start = csvLine.find_first_not_of(separator, 0);
    do {
        end = csvLine.find_first_of(separator, start);
        if (start == csvLine.length() || start == end)
            break;
        if (end >= 0)
            token = csvLine.substr(start, end - start);
        else
            token = csvLine.substr(start, csvLine.length() - start);
        tokens.push_back(token);
        start = end + 1;
    } while (end > 0);

    return tokens;
}

WeatherEntry WeatherCSVReader::stringsToWBE(std::vector<std::string> tokens) {
    double temprature[28] = {0};
    std::cout << "Token Size = " << tokens.size() << std::endl;

    if (tokens.size() != 29) // bad
        {
        std::cout << "Bad line " << std::endl;
        throw std::exception{};
    }
    // we have 5 tokens
    try {
        for (int i = 1; i < 29; ++i) {
            temprature[i] = std::stod(tokens[i]);
        }
    } catch (const std::exception &e) {
        std::cout << "CSVReader::stringsToOBE Bad float! " << tokens[3] << std::endl;
        std::cout << "CSVReader::stringsToOBE Bad float! " << tokens[4] << std::endl;
        throw;
    }

    WeatherEntry weatherEntry{
            temprature,
            tokens[0]
    };

    return weatherEntry;
}

WeatherEntry WeatherCSVReader::stringsToWeather(std::string tempratureString[],
                                                std::string timestampString) {
    double temprature[29];
    std::string userName = "user1";
    try {
        for (int i = 1; i <= 29; ++i) {
            temprature[i] = std::stod(tempratureString[i]);
        }
    } catch (const std::exception &e) {
        std::cout << "CSVReader::stringsToOBE Bad float! " << tempratureString << std::endl;
        std::cout << "CSVReader::stringsToOBE Bad float! " << timestampString << std::endl;
        throw;
    }
    WeatherEntry weather{
            temprature, timestampString
    };

    return weather;
}
     