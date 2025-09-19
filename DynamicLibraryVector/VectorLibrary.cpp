#include "VectorLibrary.h"
#include "NumberLibrary.h"
#include <cmath>
#include <stdexcept>
#include "pch.h"

Number Vector::getX()
{
    return x;
}

Number Vector::getY()
{
    return y;
}

void Vector::setX(Number dx) {
    this->x = dx;
}

void Vector::setY(Number dy) {
    this->y = dy;
}

Vector::Vector() : x(0.0), y(0.0) {}

Vector::Vector(Number dx, Number dy) : x(dx), y(dy) {}

Vector Vector::operator+(const Vector& other) const
{
    return Vector(Number(x) + other.x, Number(y) + other.y);
}

Vector Vector::operator-(const Vector& other) const
{
    return Vector(Number(x) - other.x, Number(y) - other.y);
}

Vector Vector::operator*(Number scalar) const
{
    return Vector(Number(x) * scalar, Number(y) * scalar);
}

Vector Vector::operator/(Number scalar) const
{
    if (scalar == Number(0.0)) {
        throw std::runtime_error("деление на ноль\n");
    }
    return Vector(Number(x) / scalar, Number(y) / scalar);
}

Number Vector::length() const
{
    double val = sqrt((x.getValue() * x.getValue() + y.getValue() * y.getValue()));
    return Number(val);
}

Number Vector::angle() const
{
    if (y == Number(0.0)) {
        throw std::runtime_error("делелние на ноль\n");
    }
    return Number(std::atan(((Number(x) / y).getValue())));
}


