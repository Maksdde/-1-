#include <iostream>
#include "func.h"

using namespace std;

int main() {
    cout << "Creating two dots..." << endl;
    cout << "Creating first dot:" << endl;
    Dot dot1 = readDot();
    cout << "First dot: ";
    printDot(dot1);
    cout << endl;

    cout << "\nCreating second dot:" << endl;
    Dot dot2 = readDot();
    cout << "Second dot: ";
    printDot(dot2);
    cout << endl;


    cout << "\nCreating two circles..." << endl;
    cout << "Creating first circle:" << endl;
    Circle circle1 = readCircle();
    cout << "First circle: ";
    printCircle(circle1);
    cout << "\nLength: " << lengthCircle(circle1) << ", Area: " << areaCircle(circle1) << endl;

    cout << "\nCreating second circle:" << endl;
    Circle circle2 = readCircle();
    cout << "Second circle: ";
    printCircle(circle2);
    cout << "\nLength: " << lengthCircle(circle2) << ", Area: " << areaCircle(circle2) << endl;
    
    cout << "\nCreating two squares..." << endl;
    cout << "Creating first square:" << endl;
    Square square1 = readSquare();
    cout << "First square: ";
    printSquare(square1);
    cout << "\nPerimeter: " << lengthSquare(square1) << ", Area: " << areaSquare(square1) << endl;

    cout << "\nCreating second square:" << endl;
    Square square2 = readSquare();
    cout << "Second square: ";
    printSquare(square2);
    cout << "\nPerimeter: " << lengthSquare(square2) << ", Area: " << areaSquare(square2) << endl;
    

    cout << "\nAre dots in figures?" << endl;

    cout << "Checking first dot in first circle: ";
    cout << (DotinCircle(dot1, circle1) ? "INSIDE" : "OUTSIDE") << endl;
    
    cout << "Checking first dot in first square: ";
    cout << (DotinSquare(dot1, square1) ? "INSIDE" : "OUTSIDE") << endl;
    
    cout << "Checking second dot in first circle: ";
    cout << (DotinCircle(dot2, circle1) ? "INSIDE" : "OUTSIDE") << endl;
    
    cout << "Checking second dot in first square: ";
    cout << (DotinSquare(dot2, square1) ? "INSIDE" : "OUTSIDE") << endl;
    
    cout << "\nAre dots on contours?" << endl;
    
    cout << "Checking first dot on first circle contour: ";
    cout << (DotonCircle(dot1, circle1) ? "ON CONTOUR" : "NOT ON CONTOUR") << endl;
    
    cout << "Checking first dot on first square contour: ";
    cout << (DotonSquare(dot1, square1) ? "ON CONTOUR" : "NOT ON CONTOUR") << endl;
    
    cout << "Checking second dot on first circle contour: ";
    cout << (DotonCircle(dot2, circle1) ? "ON CONTOUR" : "NOT ON CONTOUR") << endl;
    
    cout << "Checking second dot on first square contour: ";
    cout << (DotonSquare(dot2, square1) ? "ON CONTOUR" : "NOT ON CONTOUR") << endl;
    

    cout << "\nDo figures cross?" << endl;
    
    cout << "Circle 1 and Circle 2: ";
    cout << (CirclesCross(circle1, circle2) ? "CROSS" : "DO NOT CROSS") << endl;
    
    cout << "Square 1 and Square 2: ";
    cout << (SquaresCross(square1, square2) ? "CROSS" : "DO NOT CROSS") << endl;
    
    cout << "Circle 1 and Square 1: ";
    cout << (CircleSquareCross(circle1, square1) ? "CROSS" : "DO NOT CROSS") << endl;
    
    cout << "Circle 1 and Square 2: ";
    cout << (CircleSquareCross(circle1, square2) ? "CROSS" : "DO NOT CROSS") << endl;
    
    cout << "Circle 2 and Square 1: ";
    cout << (CircleSquareCross(circle2, square1) ? "CROSS" : "DO NOT CROSS") << endl;
    
    cout << "Circle 2 and Square 2: ";
    cout << (CircleSquareCross(circle2, square2) ? "CROSS" : "DO NOT CROSS") << endl;
    
    cout << "\nAre any figures inside other ones?" << endl;
    
    cout << "Circle 1 in Circle 2: ";
    cout << (CircleinCircle(circle1, circle2) ? "INSIDE" : "NOT IN") << endl;
    
    cout << "Circle 2 in Circle 1: ";
    cout << (CircleinCircle(circle2, circle1) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Square 1 in Square 2: ";
    cout << (SquareinSquare(square1, square2) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Square 2 in Square 1: ";
    cout << (SquareinSquare(square2, square1) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Square 1 in Circle 1: ";
    cout << (SquareinCircle(square1, circle1) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Square 2 in Circle 1: ";
    cout << (SquareinCircle(square2, circle1) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Square 1 in Circle 2: ";
    cout << (SquareinCircle(square1, circle2) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Square 2 in Circle 2: ";
    cout << (SquareinCircle(square2, circle2) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Circle 1 in Square 1: ";
    cout << (CircleinSquare(circle1, square1) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Circle 2 in Square 1: ";
    cout << (CircleinSquare(circle2, square1) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Circle 1 in Square 2: ";
    cout << (CircleinSquare(circle1, square2) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "Circle 2 in Square 2: ";
    cout << (CircleinSquare(circle2, square2) ? "INSIDE" : "NOT INSIDE") << endl;
    
    cout << "\nThat`s all folks!" << endl;
    
    return 0;
}