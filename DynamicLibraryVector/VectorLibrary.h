#pragma once

#ifdef VECTORLIBRARY_EXPORTS
#define VECTORLIBRARY_API __declspec(dllexport)
#else
#define VECTORLIBRARY_API __declspec(dllimport)
#endif

#include "NumberLibrary.h"

class VECTORLIBRARY_API Vector {
private:
    Number x;
    Number y;

public:
    Number getX();
    Number getY();

    void setX(Number x);
    void setY(Number y);

    Vector();
    Vector(Number x, Number y);

    Vector operator+(const Vector& other) const;
    Vector operator-(const Vector& other) const;
    Vector operator*(Number scalar) const;
    Vector operator/(Number scalar) const;

    Number length() const;
    Number angle() const;

    static const Vector ZERO;
    static const Vector ONE;


};
