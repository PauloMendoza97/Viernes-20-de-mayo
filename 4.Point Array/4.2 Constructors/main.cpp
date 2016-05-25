#include<iostream>
using namespace std;

class PointArray{
private:
	Point *p;
	int Tamano;
public:
	PointArray();
	/*mplementar un constructor que crea una copia de un 
	PointArray dado ( un constructor de copia ) */
	PointArray(const Point points[], const int Tamano);
	/*(Sugerencia : Asegúrese de que los dos PointArrays no terminan
	usando la misma memoria por sus matrices internas También asegúrese
	de que el contenido de la matriz original se copien).*/
	PointArray(const PointArray &pv);
};
