#include "Vector3.h"
#include<math.h>

Vector3::Vector3()
{
	x = y = z = 0;
}
Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
float Vector3::GetX()
{
	return x;
}
float Vector3::GetY()
{
	return y;
}
float Vector3::GetZ()
{
	return z;
}
void Vector3::SetX(float x)
{
	this->x = x;
}
void Vector3::SetY(float y)
{
	this->y = y;
}
void Vector3::SetZ(float z)
{
	this->z = z;
}
Vector3 Vector3::operator+(Vector3 v2)
{
	Vector3 temp;
	temp.SetX(x + v2.GetX());
	temp.SetY(y + v2.GetY());
	temp.SetZ(z + v2.GetZ());
	return temp;
}

Vector3 Vector3::operator-(Vector3 v2)
{
	Vector3 temp;
	temp.SetX(x - v2.GetX());
	temp.SetY(y - v2.GetY());
	temp.SetZ(Z - v2.GetZ());
	return temp;
}

Vector3 Vector3::UnitVector(Vector3 vector)
{
	float size = VectorSize(vector);
	Vector3 unit = Vector3(vector.x / size, vector.y / size, vector.z/size);
	return unit;
}

float Vector3::VectorSize(Vector3 vector) {
	float x = vector.GetX();
	float y = vector.GetY();
	float z = vector.GetZ();
	return (float)sqrt((x * x) + (y * y) + (z * z));
}

float Vector3::operator*(Vector3 v2)
{
	float temp;
	temp = x * v2.GetX() + y * v2.GetY() + z * v2.GetZ();
	return temp;
}

Vector3 Vector3::operator*(float esc) {
	Vector3 temp;
	temp.SetX(x * esc);
	temp.SetY(y * esc);
	temp.SetZ(z * esc);
	return temp;
}