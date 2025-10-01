#include "structs.h"

Dot readDot();
void printDot(const Dot& d);

Circle readCircle();
void printCircle(const Circle& c);
double lengthCircle(const Circle& c);
double areaCircle(const Circle& c);

Square readSquare();
void printSquare(const Square& s);
double lengthSquare(const Square& s);
double areaSquare(const Square& s);


bool DotinCircle(const Dot& d, const Circle& c);
bool DotinSquare(const Dot& d, const Square& s);

bool DotonCircle(const Dot& d, const Circle& c);
bool DotonSquare(const Dot& d, const Square& s);

bool CirclesCross(const Circle& c1, const Circle& c2);
bool SquaresCross(const Square& s1, const Square& s2);
bool CircleSquareCross(const Circle& c, const Square& s);

bool CircleinCircle(const Circle& insc, const Circle& outc);
bool SquareinSquare(const Square& ins, const Square& outs);
bool SquareinCircle(const Square& s, const Circle& c);
bool CircleinSquare(const Circle& c, const Square& s);
