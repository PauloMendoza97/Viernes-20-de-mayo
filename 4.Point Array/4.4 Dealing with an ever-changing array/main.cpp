#include<iostream>
using namespace std;
/*Se trata de un conjunto siempre cambiante*/
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
};

int main (int argc, char *argv[]) {
	
	return 0;
}

