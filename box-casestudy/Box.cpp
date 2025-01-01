//
// Created by Syed Nouman Ali Shah on 26/11/2023.
//
#include "Box.h"
using namespace std::rel_ops;

inline Box Box::operator+(const Box& aBox) const
{
    // New object has larger length and width, and sum of heights
    return Box{ (length + aBox.length),
                (width+ aBox.width),
                (height + aBox.height)};
}
bool Box::operator==(const Box& aBox) const
{
    return width == aBox.width
           && length == aBox.length
           && height == aBox.height;
}


void Box::show(const Box& box1, std::string_view relationship, const Box& box2)
{
    std::cout << "Box " << box1.getLength() << 'x' << box1.getWidth() << 'x' << box1.getHeight()
              << relationship
              << "Box " << box2.getLength() << 'x' << box2.getWidth() << 'x' << box2.getHeight()
              << std::endl;
}


inline Box& Box::operator++()
{
    ++length;
    ++width;
    ++height;
    return *this;
}

inline const Box Box::operator++(int)
{
    auto copy{*this}; // Create a copy of the current object
    ++(*this); // Increment the current object using the prefix operator...
    return copy; // Return the unincremented copy
}
inline Box& Box::operator+=(const Box& aBox)
{
    *this = *this + aBox; // Creates a temporary Box object
    return *this;
}

/*inline Box& Box::operator+=(const Box& aBox)
{
    // New object has larger length and width, and sum of heights
    length = std::max(length, aBox.length);
    width = std::max(width, aBox.width);
    height += aBox.height;
    return *this;
}*/

Box Box::operator~() const
{
    return Box{width, length, height}; // width and length are swapped
}