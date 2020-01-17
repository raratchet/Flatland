#pragma once
class Vector3
{
private:
	float x;
	float y;
	float z;
public:
	Vector3();
	Vector3(float x, float y, float z);
	float GetX();
	float GetY();
	float GetZ();
	void SetX(float x);
	void SetY(float y);
	void SetZ(float z);
	float VectorSize(Vector3 vector);
	Vector3 operator+(Vector3 v2);
	Vector3 operator-(Vector3 v2);
	float operator*(Vector3 v2);
	Vector3 operator*(float esc);
	Vector3 UnitVector(Vector3 vec);
};

