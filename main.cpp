#include "car.h"
#include"plane.h"


void main() {
	vehicles* v[2] = { new car(150,"Nissan",4,"red",chassis::wheeled,body::sedan,engine::petrol,15),
						new Plane(800,"Boeng",250,"white",10000) };
	for (size_t i = 0; i < 2; i++)
	{
		v[i]->info();
		cout << endl;
	}
}