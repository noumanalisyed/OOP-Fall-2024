#ifndef INTEGER_HEADER_H
#define INTEGER_HEADER_H

#include <iostream>
using namespace std;
using std::cout, std::cin, std::endl, std::ostream, std::istream;

class Integer
{
private:
    int value ;

public:
    Integer(int value = 0);
    Integer(const Integer &copy);

    int getValue() const;
    void setValue(int value);

    int compare(const Integer &copy) const;
    Integer add(const Integer &num) const;
    Integer sub(const Integer &num) const;
    Integer multiply(const Integer &num) const;
    void print(ostream &out = cout) const;

    Integer &operator=(const Integer &copy);
    bool operator==(const Integer &copy) const;
    bool operator<(const Integer &copy) const;
    bool operator<=(const Integer &copy) const;
    bool operator>(const Integer &copy) const;
    bool operator>=(const Integer &copy) const;

    Integer operator+(const Integer &num) const;
    Integer operator-(const Integer &num) const;
    Integer operator*(const Integer &num) const;
};

ostream &operator<<(ostream &out, const Integer &Int);

#endif