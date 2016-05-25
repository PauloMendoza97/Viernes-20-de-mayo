#include<iostream>
using namespace std;

class PointArray{
private:
	Point *p;
	int Tamano;
	void resize(int numero);
public:
	PointArray();
	PointArray(const Point points[], const int Tamano);
	PointArray(const PointArray &pv);
	~PointArray();
	/*A�adir un punto al final de la matriz*/
	void push_back(const Point &p);
	/*Insertar un punto en alguna posici�n arbitraria ( sub�ndice ) de la matriz,
	el desplazamiento de los elementos de la posici�n pasada a la derecha*/
	void insert(const int position, const int Point &p);
	/*Retire el punto en alguna posici�n arbitraria ( sub�ndice ) de la matriz , 
	el desplazamiento de los elementos restantes a la izquierda*/
	void remove(const int pos);
	/*Obtener el tama�o de la matriz*/
	const int getSize() const;
	/*Retire todo, desde la matriz y establece su tama�o a 0*/
	void clear();
	
	
};

int main (int argc, char *argv[]) {
	
	return 0;
}

