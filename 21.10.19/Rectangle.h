#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(int NewX, int NewY, int NewWidth, int NewHeight);
	virtual ~Rectangle();

	virtual void Draw() override;

	inline int GetWidth() const { return Width; }
	inline int GetHeight() const { return Height; }

	inline void SetWidth(int NewWidth) { Width = NewWidth; }
	inline void SetHeight(int NewHeight) { Height = NewHeight; }

private:
	int Width;
	int Height;
};

