#include <stdexcept>
#include "NumberLibrary.h"

namespace NumberLibrary {
	const Number Number::ZERO = 0;
	const Number Number::ONE = 1;


	Number::Number()
	{
	}

	Number::Number(double value)
	{
		this->value = value;
	}
	double Number::getValue() const {
		return value;
	}

	void Number::setValue(double value) {

	}

	Number Number::operator +(const Number& other) {
		return Number(value + other.value);
	}
	Number Number::operator -(const Number& other) {
		return Number(value + other.value);
	}
	Number Number::operator *(const Number& other) {
		return Number(value * other.value);
	}
	Number Number::operator /(const Number& other) {
		if (other.value == 0) {
			throw std::runtime_error("Division by zero");
		}
		return Number(value / other.value);
	}
	Number Number::operator -() {
		return Number(-value);
	}
	bool Number::operator==(const Number& other) const {
		return value == other.value;
	}

	bool Number::operator!=(const Number& other) const {
		return value != other.value;
	}

	Number createNumber(double value) {
		return Number(value);
	}
}

