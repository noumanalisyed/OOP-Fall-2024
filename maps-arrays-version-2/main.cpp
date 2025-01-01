#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <limits>

void displayMaxMinTemp(const std::string& selectedDate, const std::string& selectedCountry);
std::string extractDate(const std::string& timestamp);
std::string extractTime(const std::string& timestamp);

std::map<std::string, std::map<std::string, std::map<std::string, int>>> weatherData;

int main() {
    std::vector<std::string> dateString = {
            "1980-01-01T01:00:00Z", "1980-01-01T02:00:00Z", "1980-01-01T03:00:00Z",
            "1980-01-02T01:00:00Z", "1980-01-02T02:00:00Z", "1980-01-02T03:00:00Z",
            "1980-01-03T01:00:00Z", "1980-01-03T02:00:00Z", "1980-01-03T03:00:00Z",
            "1980-01-04T01:00:00Z", "1980-01-04T02:00:00Z", "1980-01-04T03:00:00Z",
            "1980-01-05T01:00:00Z", "1980-01-05T02:00:00Z", "1980-01-05T03:00:00Z",
            "1980-01-06T01:00:00Z", "1980-01-06T02:00:00Z", "1980-01-06T03:00:00Z"
    };

    std::string extractedDate[18];
    std::string extractedTime[18];
    int data[6][9] = {
            {51, 67, 63, 77, 78, 99, 53, 69, 65},
            {51, 67, 63, 77, 78, 99, 53, 69, 65},
            {51, 67, 63, 77, 78, 99, 53, 69, 65},
            {51, 67, 63, 77, 78, 99, 53, 69, 65},
            {51, 67, 63, 77, 78, 99, 53, 69, 65},
            {51, 67, 63, 77, 78, 99, 53, 69, 65}
    };

    std::map<std::string, std::string> europeanCountries = {
            {"Austria", "AT"}, {"Belgium", "BE"}, {"Bulgaria", "BG"}, {"Switzerland", "CH"},
            {"Czech Republic", "CZ"}, {"Germany", "DE"}, {"Denmark", "DK"}, {"Estonia", "EE"},
            {"Spain", "ES"}, {"Finland", "FI"}, {"France", "FR"}, {"United Kingdom", "GB"},
            {"Greece", "GR"}, {"Croatia", "HR"}, {"Hungary", "HU"}, {"Ireland", "IE"},
            {"Italy", "IT"}, {"Lithuania", "LT"}, {"Luxembourg", "LU"}, {"Latvia", "LV"},
            {"Netherlands", "NL"}, {"Norway", "NO"}, {"Poland", "PL"}, {"Portugal", "PT"},
            {"Romania", "RO"}, {"Sweden", "SE"}, {"Slovenia", "SI"}, {"Slovakia", "SK"}
    };

    // Extract dates and times from the timestamps
    for (int i = 0; i < dateString.size(); i++) {
        extractedDate[i] = extractDate(dateString[i]);
        extractedTime[i] = extractTime(dateString[i]);
    }

    // Insert some values into the map
    for (int i = 0; i < dateString.size(); ++i) {
        int countryIndex = 0;
        for (const auto& country : europeanCountries) {
            if (countryIndex < europeanCountries.size()) { // Limiting to 3 countries for the data
                weatherData[extractedDate[i]][country.second][extractedTime[i]] = data[countryIndex][i];
                countryIndex++;
            }
        }
    }

    // Iterate over the map and print the contents
    for (const auto& outerPair : weatherData) {
        const std::string& outerKey = outerPair.first;
        const auto& outerMap = outerPair.second;
        std::cout << "Date: " << outerKey << std::endl;
        for (const auto& middlePair : outerMap) {
            const std::string& middleKey = middlePair.first;
            const auto& middleMap = middlePair.second;

            std::cout << "  Country: " << middleKey << std::endl;

            for (const auto& innerPair : middleMap) {
                const std::string& innerKey = innerPair.first;
                int value = innerPair.second;

                std::cout << "    Time Stamp: " << innerKey << " => Value: " << value << std::endl;
            }
        }
    }

    std::string selectedDate = "1980-01-03";
    std::string selectedCountry = "GB";
    displayMaxMinTemp(selectedDate, selectedCountry);

    return 0;
}

void displayMaxMinTemp(const std::string& selectedDate, const std::string& selectedCountry) {
    if (weatherData.find(selectedDate) != weatherData.end() && weatherData[selectedDate].find(selectedCountry) != weatherData[selectedDate].end()) {
        const auto& temperatures = weatherData[selectedDate][selectedCountry];

        int maxTemp = std::numeric_limits<int>::min();
        int minTemp = std::numeric_limits<int>::max();

        for (const auto& innerPair : temperatures) {
            int temp = innerPair.second;
            if (temp > maxTemp) {
                maxTemp = temp;
            }
            if (temp < minTemp) {
                minTemp = temp;
            }
        }
        std::cout << "Max temperature for " << selectedCountry << " on " << selectedDate << ": " << maxTemp << std::endl;
        std::cout << "Min temperature for " << selectedCountry << " on " << selectedDate << ": " << minTemp << std::endl;
    } else {
        std::cout << "No data found for " << selectedCountry << " on " << selectedDate << std::endl;
    }
}

std::string extractDate(const std::string& timestamp) {
    return timestamp.substr(0, 10);
}

std::string extractTime(const std::string& timestamp) {
    return timestamp.substr(11, 8);
}
