#include "Point3D.h"
#include<iostream>
using namespace std;

Point3D::Point3D()
{
	x = 0;
	y = 0;
}
Point3D::Point3D(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point3D::Init(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
void Point3D::Show()
{
	cout << "X: " << x << "\t" << "Y: " << y << "\t" << "Z: " << z << endl;
}

Point3D Point3D::Sum(Point3D& b)
{
	Point3D rez;
	rez.x = x + b.x;
	rez.y = y + b.y;
	rez.z = z + b.z;
	return rez;
}
Point3D Point3D::Mult(Point3D& b)
{
	Point3D rez;
	rez.x = x * b.x;
	rez.y = y * b.y;
	rez.z = z * b.z;
	return rez;
}

Point3D& Point3D::Sum(int x, int y, int z)
{
	this->x += x;
	this->z += z;
	this->y += y;
	return *this;
}
Point3D& Point3D::Mult(int x, int y, int z)
{
	this->x *= x;
	this->z *= z;
	this->y *= y;
	return *this;
}
Point3D& Point3D::Min(int x, int y, int z)
{
	this->x -= x;
	this->z -= z;
	this->y -= y;
	return *this;
}
Point3D& Point3D::Div(int x, int y, int z)
{
	if(x != 0) this->x /= x;
	if (x != 0) this->z /= z;
	if (x != 0) this->y /= y;
	return *this;
}
