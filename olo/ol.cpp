#include "ol.h"

ol::ol(int x, int y)
{
	setX(x);
	setY(y);
}

ol::ol(const ol& copy)
{
	setX(copy.mx);
	setY(copy.my);
}

void ol::setX(const int& x)
{
	mx = x;
}

void ol::setY(const int& y)
{
	my = y;
}

int ol::getX()
{
	return mx;
}

int ol::getY()
{
	return my;
}

ol& ol::operator+(const ol& obj)
{
	ol res(0,0);

	res.mx = mx + obj.mx;
	res.my = my + obj.my;

	return res;
}

ol& ol::operator+=(const ol& obj)
{
	mx += obj.mx;
	my += obj.my;

	return *this;
}

ol& ol::operator-(const ol& obj)
{
	ol res(0, 0);

	res.mx = mx - obj.mx;
	res.my = my - obj.my;

	return res;
}

ol& ol::operator=(const ol& obj)
{
	if (this != &obj)
	{
		mx = obj.mx;
		my = obj.my;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const ol& obj)
{
	os << "x: " << obj.mx << " | " << "y: " << obj.my << std::endl;
	return os;
}
