#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(float len, float wid) : length(len), width(wid)
{
}

void Rectangle::setLength(float len) {
	length = len;
};
void Rectangle::setWidth(float wid) {
	width = wid;
};

float Rectangle::getLength() {
	return length;
};
float Rectangle::getWidth() {
	return width;
};
float Rectangle::getArea() {
	return length * width;
};


