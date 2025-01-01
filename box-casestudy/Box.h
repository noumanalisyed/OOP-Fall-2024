//
// Created by Syed Nouman Ali Shah on 26/11/2023.
//

#ifndef BOX_CASESTUDY_BOX_H
#define BOX_CASESTUDY_BOX_H
#include <iostream>
#include <iomanip>
#include <algorithm> // For the min() and max() function templates
class Box
{
    friend std::ostream& operator<<(std::ostream& stream, const Box& box);
private:
    double length {1.0};
    double width {1.0};
    double height {1.0};
public:
    // Constructors
    Box(double lv, double wv, double hv)
            : length {std::max(lv,wv)}, width {std::min(lv,wv)}, height {hv} {}
    Box() = default; // No-arg constructor
    double volume() const // Function to calculate the volume
    {
        return length*width*height;
    }

    // Accessors
    double getLength() const { return length; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
    bool operator<(const Box& aBox) const; // Less-than operator
    bool operator<(double value) const; // Compare Box volume < double value
    Box operator+(const Box& aBox) const; // Function to add two Box objects
    bool operator==(const Box& aBox) const;
    void show(const Box& box1, std::string_view relationship, const Box& box2);
    Box& operator++();
    const Box operator++(int);
    Box& operator+=(const Box& aBox);
    Box operator~() const;

};
#endif //BOX_CASESTUDY_BOX_H
