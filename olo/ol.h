#include <iostream>
#include <string>
#pragma once


class ol
{
private:
	int mx;
	int my;

public:

	ol(int x, int y);
	ol(const ol& copy);

	void setX(const int& x);
	void setY(const int& y);

	int getX();
	int getY();

	friend std::ostream& operator<<(std::ostream& os, const ol& obj);

	ol& operator+(const ol& obj);
	ol& operator+=(const ol& obj);
	ol& operator-(const ol& obj);
	ol& operator=(const ol& obj);




};

