#include <iostream>
#include <map>
#include <string>
void displayMaxMinTemp(std::string selectedDate, std::string selectedCountry);
std::string extractDate(const std::string& timestamp);
std::string extractTime(const std::string& timestamp);
std::string extractCountry(const std::string& strCountry);

std::map<std::string, std::map<std::string, std::map<std::string, int>>> mp;
int main() {
    std::string dateString[3][3] = {
            {"1980-01-01T01:00:00Z","1980-01-01T02:00:00Z","1980-01-01T03:00:00Z"},
            {"1980-01-02T01:00:00Z","1980-01-02T02:00:00Z","1980-01-02T03:00:00Z"},
            {"1980-01-03T01:00:00Z","1980-01-03T02:00:00Z","1980-01-03T03:00:00Z"}
    };
    std::string extractedDate[3][3];
    std::string extractedTime[3][3];
    int data[3][3][3] = {
            {{51,67,63},{77,78,99},{53,69,65}},
            {{51,67,63},{77,78,99},{53,69,65}},
            {{51,67,63},{77,78,99},{53,69,65}}};

    std::vector<std::string> country ={"Germany","France","Britian"};
    // Output the map contents
   /* for (const auto& country : europeanCountries) {
        std::cout << country.first << " -> " << country.second << std::endl;
    }
*/

    // Insert some values into the map
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; ++j) {
            extractedDate[i][j] = extractDate(dateString[i][j]);
            extractedTime[i][j] = extractTime(dateString[i][j]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k)
                mp[extractedDate[i][j]][country[k]][extractedTime[i][j]] = data[i][j][k];

        }
    }

    // Iterate over the map
    for (const auto &outerPair: mp) {
        const std::string &outerKey = outerPair.first;
        const std::map<std::string, std::map<std::string, int>> &outerMap = outerPair.second;
        std::cout << "Date: " << outerKey << std::endl;
        for (const auto &middlePair: outerMap) {
            const std::string &middleKey = middlePair.first;
            const std::map<std::string, int> &middleMap = middlePair.second;

            std::cout << "  Country: " << middleKey << std::endl;

            for (const auto &innerPair: middleMap) {
                const std::string &innerKey = innerPair.first;
                int value = innerPair.second;

                std::cout << "    Time Stamp: " << innerKey << " => Value: " << value << std::endl;
            }
        }
    }
    std::string selectedDate = "1980-01-03";
    std::string selectedCountry = "Germany";
    displayMaxMinTemp(selectedDate, selectedCountry);
    return 0;
}

void displayMaxMinTemp(std::string selectedDate, std::string selectedCountry) {

    if (mp.find(selectedDate) != mp.end() && mp[selectedDate].find(selectedCountry) != mp[selectedDate].end()) {
        const std::map<std::string, int> &temperatures = mp[selectedDate][selectedCountry];

        int maxTemp = std::numeric_limits<int>::min();
        int minTemp = std::numeric_limits<int>::max();

        for (const auto &innerPair: temperatures) {
            int temp = innerPair.second;
            if (temp > maxTemp) {
                maxTemp = temp;
            }
            if (temp < minTemp) {
                minTemp = temp;
            }
        }
        std::cout << "Max temperature for " << selectedCountry << " on " << selectedDate << ": " << maxTemp
                  << std::endl;
        std::cout << "Min temperature for " << selectedCountry << " on " << selectedDate << ": " << minTemp
                  << std::endl;
    } else {
        std::cout << "No data found for " << selectedCountry << " on " << selectedDate << std::endl;
    }
}
std::string extractDate(const std::string& timestamp) {
    return timestamp.substr(0, 10);
    // Assuming timestamp format is "YYYY-MM-DD HH:MM:SS"
}
std::string extractTime(const std::string& timestamp) {
    return timestamp.substr(11, 8);
    // Assuming timestamp format is "YYYY-MM-DD HH:MM:SS"
}
std::string extractCountry(const std::string& strCountry) {
    return strCountry.substr(0, 2);
    // Assuming timestamp format is "YYYY-MM-DD HH:MM:SS"
}