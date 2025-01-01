//
// Created by Syed Nouman Ali Shah on 08/06/2024.
//

#ifndef MERKLEREX_END_TOPIC_5_WEATHERNODE_H
#define MERKLEREX_END_TOPIC_5_WEATHERNODE_H
#include<iostream>
class WeatherNode{
public:
    WeatherNode() = default;
    WeatherNode(double _temprature, std::string _country);

    double getTemprature() const ;

    void setTemprature(double temprature) ;

    const std::string &getCountry() const ;

    void setCountry(const std::string &country) ;

    friend std::ostream &operator<<(std::ostream &os, const WeatherNode &node) {
        os << "temprature: " << node.temprature << " country: " << node.country;
        return os;
    }

private:
    double temprature {0.0f};
    std::string country {""};
};
#endif //MERKLEREX_END_TOPIC_5_WEATHERNODE_H
