#pragma once
#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle();
	Triangle(int NewX, int NewY, int NewEdge);
	virtual ~Triangle();

	virtual void Draw() override;

	inline int GetEdge() const { return Edge; }
	inline void SetEdge(int NewEdge) { Edge = NewEdge; }

	virtual void Save(std::ofstream& writeFile);
	virtual Shape* Load(std::ifstream& readFile);

private:
	int Edge;
};
