#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int NewX, int NewY, int NewWidth, int NewHeight)
{
	SetX(NewX);
	SetY(NewY);
	SetWidth(NewWidth);
	SetHeight(NewHeight);
	Name = "�׸�";
}

Rectangle::~Rectangle()
{
}

void Rectangle::Draw()
{
	std::cout << "�׸�" << std::endl;
}