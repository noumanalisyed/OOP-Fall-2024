//
// Created by Syed Nouman Ali Shah on 08/06/2024.
//
#include "WeatherNode.h"
WeatherNode::WeatherNode(double _temprature, std::string _country){
    temprature = _temprature;
    country = _country;
}

double WeatherNode::getTemprature() const {
    return temprature;
}

void WeatherNode::setTemprature(double temprature) {
    WeatherNode::temprature = temprature;
}

const std::string & WeatherNode::getCountry() const {
    return country;
}

void WeatherNode::setCountry(const std::string &country) {
    WeatherNode::country = country;
}
