#ifndef _VECTOR2_H_
#define _VECTOR2_H_

class Vector2
{
public:
	Vector2() = default;
	~Vector2() = default;

	Vector2(double x, double y) :x(x), y(y) {}

	Vector2 operator+(const Vector2& vec)const
	{
		return Vector2(x + vec.x, y + vec.y);
	}

	void operator += (const Vector2& vec)
	{
		x += vec.x, y += vec.y;
	}

	Vector2 operator-(const Vector2& vec)const
	{
		return Vector2(x - vec.x, y - vec.y);
	}

	void operator -= (const Vector2& vec)
	{
		x -= vec.x, y -= vec.y;
	}

	double operator* (const Vector2& vec)const
	{
		return x * vec.x + y * vec.y;
	}

	Vector2 operator*(double val)const
	{
		return Vector2(x * val , y * val);
	}

	void operator *= (const Vector2& vec)
	{
		x *= vec.x, y *= vec.y;
	}
		
	bool operator==(const Vector2& vec)const
	{
		return x == vec.x && y == vec.y;
	}

	bool operator>(const Vector2& vec)const
	{

	}
public:
	double x = 0;
	double y = 0;
private:

};


#endif // !_VECTOR2_H_

