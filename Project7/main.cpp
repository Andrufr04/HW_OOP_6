#include<iostream>
#include "Point3D.h"
using namespace std;


int main()
{
	Point3D a(1, 2, 3);
	Point3D b(4, 5, 6);
	Point3D c = a.Sum(b);
	c.Show();
	c = a.Mult(b);
	c.Show();


	c = a.Mult(0, 0, 0);
	c.Show();
	c = a.Sum(10, 20, 30);
	c.Show();
	c = a.Div(10, 10, 10);
	c.Show();
	c = a.Min(1, 2, 3);
	c.Show();
}