#include <iostream>
#include "VectorLibrary.h"
#include "NumberLibrary.h"

using namespace NumberLibrary;

using namespace std;

void testVectorOperations() {
    cout << "=== Testing Vector Class ===" << endl << endl;

    Vector v1;
    Vector v2(Number(3.0), Number(4.0));
    Vector v3(Number(1.5), Number(2.5));

    cout << "v1 (default): (" << v1.getX().getValue() << ", " << v1.getY().getValue() << ")" << endl;
    cout << "v2 (3,4): (" << v2.getX().getValue() << ", " << v2.getY().getValue() << ")" << endl;
    cout << "v3 (1.5,2.5): (" << v3.getX().getValue() << ", " << v3.getY().getValue() << ")" << endl;
    cout << endl;

    v1.setX(Number(5.0));
    v1.setY(Number(7.0));
    cout << "After setX(5) and setY(7): (" << v1.getX().getValue() << ", " << v1.getY().getValue() << ")" << endl;
    cout << endl;

    Vector sum = v2 + v3;
    cout << "v2 + v3 = (" << sum.getX().getValue() << ", " << sum.getY().getValue() << ")" << endl;

    Vector diff = v2 - v3;
    cout << "v2 - v3 = (" << diff.getX().getValue() << ", " << diff.getY().getValue() << ")" << endl;

    Vector scaled = v2 * Number(2.0);
    cout << "v2 * 2 = (" << scaled.getX().getValue() << ", " << scaled.getY().getValue() << ")" << endl;

    Vector divided = v2 / Number(2.0);
    cout << "v2 / 2 = (" << divided.getX().getValue() << ", " << divided.getY().getValue() << ")" << endl;
    cout << endl;

    Number len = v2.length();
    cout << "Length of v2(3,4) = " << len.getValue() << endl;

    try {
        Number angle = v2.angle();
        cout << "Angle of v2(3,4) = " << angle.getValue() << " radians" << endl;
    }
    catch (const exception& e) {
        cout << "Error calculating angle: " << e.what() << endl;
    }
    cout << endl;


    try {
        Vector error = v2 / Number(0.0);
    }
    catch (const exception& e) {
        cout << "Division by zero caught: " << e.what() << endl;
    }

    Vector vertical(Number(5.0), Number(0.0));
    try {
        Number angle = vertical.angle();
    }
    catch (const exception& e) {
        cout << "Angle calculation error: " << e.what() << endl;
    }
}

void testComplexOperations() {
    cout << "=== Testing Complex Vector Operations ===" << endl << endl;

    Vector a(Number(2.0), Number(3.0));
    Vector b(Number(1.0), Number(4.0));

    Vector result = (a + b) * Number(3.0) - a / Number(2.0);
    cout << "(a + b) * 3 - a/2 = (" << result.getX().getValue() << ", " << result.getY().getValue() << ")" << endl;
}

int main() {
    try {
        testVectorOperations();
        testComplexOperations();

        cout << "=== All tests completed successfully! ===" << endl;

    }
    catch (const exception& e) {
        cout << "Unexpected exception: " << e.what() << endl;
        return 1;
    }

    return 0;
}