#include<iostream>
using namespace std;
/*Definir un destructor que elimina la matriz interna del PointArray .*/
class PointArray{
private:
	Point *p;
	int Tamano;
public:
	PointArray();
	PointArray(const Point points[], const int Tamano);
	PointArray(const PointArray &pv);
	~PointArray();//destructor
};
