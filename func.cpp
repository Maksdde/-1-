#include "func.h"
#include <cmath>
#include <iostream>

using namespace std;


const double error = 1e-5;
const double PI = 3.14159265358979323846264338327950288;
bool equal(double x, double y) {
    return fabs(x - y) < error;
}


Dot readDot() {
    Dot dot;
    cout << "Please enter the coordinates of the dot (x y): ";
    cin >> dot.x >> dot.y;
    return dot;
}

void printDot(const Dot& d) {
    cout << "(" << d.x << ", " << d.y << ")";
}



Circle readCircle() {
    Circle krug;
    cout << "Please enter the coordinates of the center (x y) and length of the radius: ";
     cin >> krug.center.x >> krug.center.y >> krug.radius;
     return krug;
}

void printCircle(const Circle &c) {
    cout << "The center is located at the point:";
    printDot(c.center);
    cout << "/nThe radius is equal to " << c.radius;
}

double lengthCircle(const Circle& c) {
    return 2 * PI * c.radius;
}

double areaCircle(const Circle& c) {
    return PI * c.radius * c.radius;
}



Square readSquare() {
    Square quad;
    cout << "Please enter the coordinates of top left corner (x y):";
    cin >> quad.topl.x >> quad.topl.y;
    cout << "\nPlease enter the side length";
    cin >> quad.side;
    return quad;
}

void printSquare(const Square& s) {
    cout << "The top left corner is located at the point:";
    printDot(s.topl);
    cout << "\nThe side length is equal to " << s.side;
}

double lengthSquare(const Square& s) {
    return 4 * s.side;
}

double areaSquare(const Square& s) {
    return s.side * s.side;
}



bool DotinCircle(const Dot& d, const Circle& c) {
    double distx = d.x - c.center.x;
    double disty = d.y - c.center.y;
    double distsquared = distx * distx + disty * disty;
    return distsquared < c.radius * c.radius - error;
}

bool DotinSquare(const Dot& d, const Square& s) {
    return (d.x > s.topl.x + error && d.x < s.topl.x + s.side - error &&
            d.y < s.topl.y - error && d.y > s.topl.y - s.side + error);
}


bool DotonCircle(const Dot& d, const Circle& c) {
    double distx = d.x - c.center.x;
    double disty = d.y - c.center.y;
    double distsquared = distx * distx + disty * disty;
    return fabs(distsquared - (c.radius * c.radius)) < error;
}

bool DotonSquare(const Dot& d, const Square& s) {
    bool vertical = (equal(d.x, s.topl.x) || equal(d.x, s.topl.x + s.side)) && (d.y <= s.topl.y + error && d.y >= s.topl.y - s.side - error);
    bool horizontal = (equal(d.y, s.topl.y) || equal(d.y, s.topl.y - s.side)) && (d.x >= s.topl.x - error && d.x <= s.topl.x + s.side + error);
    return vertical || horizontal;
}

bool CirclesCross(const Circle& c1, const Circle& c2) {
    double distx = c1.center.x - c2.center.x;
    double disty = c1.center.y - c2.center.y;
    double distsquared = distx * distx + disty * disty;
    return distsquared < (c1.radius + c2.radius) * (c1.radius + c2.radius) + error && distsquared > fabs(c1.radius - c2.radius) * fabs(c1.radius - c2.radius) - error;
}
bool SquaresCross(const Square& s1, const Square& s2) {
    bool xcross = s1.topl.x < s2.topl.x + s2.side + error && s1.topl.x + s1.side > s2.topl.x - error;
    bool ycross = s1.topl.y > s2.topl.y - s2.side - error && s1.topl.y - s1.side < s2.topl.y + error;
    return xcross && ycross;
}
bool CircleSquareCross(const Circle& c, const Square& s) {
    double xclose = max(s.topl.x, min(c.center.x, s.topl.x + s.side));
    double yclose = min(s.topl.y, max(c.center.y, s.topl.y - s.side));
    double distx = c.center.x - xclose;
    double disty = c.center.y - yclose;
    double distanceSquared = distx * distx + disty * disty;
    return distanceSquared <= c.radius * c.radius + error;
}


bool CircleinCircle(const Circle& insc, const Circle& outc) {
    double distx = insc.center.x - outc.center.x;
    double disty = insc.center.y - outc.center.y;
    double distance = sqrt(distx * distx + disty * disty);
    return distance + insc.radius <= outc.radius + error;
}

bool SquareinSquare(const Square& ins, const Square& outs) {
    return (ins.topl.x >= outs.topl.x - error && ins.topl.x + ins.side <= outs.topl.x + outs.side + error &&
            ins.topl.y <= outs.topl.y + error && ins.topl.y - ins.side >= outs.topl.y - outs.side - error);
}

bool SquareinCircle(const Square& s, const Circle& c) {
    Dot corners[4] = {
        {s.topl.x, s.topl.y},
        {s.topl.x + s.side, s.topl.y},
        {s.topl.x, s.topl.y - s.side},
        {s.topl.x + s.side, s.topl.y - s.side}
    };
    
    for (int i = 0; i < 4; i++) {
        double distx = corners[i].x - c.center.x;
        double disty = corners[i].y - c.center.y;
        double distsquared = distx * distx + disty * disty;
        if (distsquared > c.radius * c.radius - error) {
            return false;
        }
    }
    return true;
}

bool CircleinSquare(const Circle& c, const Square& s) {
        return (c.center.x - c.radius >= s.topl.x - error &&
            c.center.x + c.radius <= s.topl.x + s.side + error &&
            c.center.y + c.radius <= s.topl.y + error &&
            c.center.y - c.radius >= s.topl.y - s.side - error);
}