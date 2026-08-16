#pragma once
class Rectangle
{
private:
	float length;
	float width;
public:
	Rectangle(float len, float wid);
	void setLength(float len);
	void setWidth(float wid);
	float getLength();
	float getWidth();
	float getArea();
};

