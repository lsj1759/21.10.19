#pragma once
#include <vector>

class Shape;

class Editor
{
public:
	Editor();
	virtual ~Editor();

	void Draw();
	void Save(); //serialize
	void Load(); //Deserialize

	void AddShape(Shape* NewShape);

private:
	std::vector<Shape*> Shapes;
};


