#pragma once


namespace NumberLibrary {
	class Number {


	public:
		double value;

		Number();
		Number(double value);

		static const Number ZERO;
		static const Number ONE;


		Number operator +(const Number& other);
		Number operator -(const Number& other);
		Number operator *(const Number& other);
		Number operator /(const Number& other);

		Number operator -();

		bool operator==(const Number& other) const;
		bool operator!=(const Number& other) const;

		double getValue() const;

		void setValue(double value);



	};

	Number createNumber(double value);

}
