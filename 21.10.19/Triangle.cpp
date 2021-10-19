#include "Triangle.h"
#include <iostream>
#include <fstream>
#include <string>

Triangle::Triangle()
{
}

Triangle::Triangle(int NewX, int NewY, int NewEdge)
{
	SetX(NewX);
	SetY(NewY);
	SetEdge(NewEdge);
	Name = "����";
}

Triangle::~Triangle()
{
}

void Triangle::Draw()
{
	std::cout << "����" << std::endl;
	std::cout << "(" << X << "," << Y << ")" << std::endl;
	std::cout << "Edge : " << Edge << std::endl;
}

void Triangle::Save(std::ofstream& writeFile)
{
	writeFile << GetName() << std::endl;
	writeFile << GetX() << std::endl;
	writeFile << GetY() << std::endl;
	writeFile << GetEdge() << std::endl;
}

Shape* Triangle::Load(std::ifstream& readFile)
{
	std::string line;

	getline(readFile, line); //X��
	int X = std::stoi(line);

	getline(readFile, line); //Y��
	int Y = std::stoi(line);

	getline(readFile, line); //�Ѻ�
	int Edge = std::stoi(line);

	return this;
}
