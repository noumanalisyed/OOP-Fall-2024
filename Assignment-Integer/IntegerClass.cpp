#include "Integer.h"

Integer::Integer(int value)
{
    Integer::value = value;
}

Integer::Integer(const Integer &copy)
{
    this->value = copy.value;
}

int Integer::getValue() const
{
    return Integer::value;
}

void Integer::setValue(int value)
{
    Integer::value = value;
}

int Integer::compare(const Integer &copy) const
{
    if (this->getValue() < copy.getValue())
    {
        return -1;
    }
    else if (this->getValue() > copy.getValue())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

Integer Integer::add(const Integer &num) const
{
    return Integer(this->getValue() + num.getValue());
}
Integer Integer::sub(const Integer &num) const
{
    return Integer(this->getValue() - num.getValue());
}
Integer Integer::multiply(const Integer &num) const
{
    return Integer(this->getValue() * num.getValue());
}

void Integer::print(ostream &out) const
{
    out << Integer::value;
}

Integer &Integer::operator=(const Integer &copy)
{
    this->value = copy.value;
    return *this;
}

bool Integer::operator==(const Integer &copy) const
{
    return (this->compare(copy) == 0);
}

bool Integer::operator<(const Integer &copy) const
{
    return (this->compare(copy) == -1);
}

bool Integer::operator<=(const Integer &copy) const
{
    return (*this < copy || *this == copy);
}

bool Integer::operator>(const Integer &copy) const
{
    return (this->compare(copy) == 1);
}

bool Integer::operator>=(const Integer &copy) const
{
    return (*this > copy || *this == copy);
}

Integer Integer::operator+(const Integer &num) const
{
    return this->add(num);
}
Integer Integer::operator-(const Integer &num) const
{
    return this->sub(num);
}
Integer Integer::operator*(const Integer &num) const
{
    return this->multiply(num);
}

ostream &operator<<(ostream &out, const Integer &Int)
{
    Int.print(out);
    return out;
}