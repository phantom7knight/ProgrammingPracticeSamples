// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>
#include <cstring>
#include <limits>
#include <algorithm>
#include <cstdio>
#include <random>
#include <map>
#include <ctime>
#include <cstring>
#include <iterator>
#include <set>
#include <utility>
#include <fstream>
#include <stack>
#include <queue>
#include <thread>



//using namespace std;
//using namespace DirectX;

#define STDPRINTLINE(x) std::cout << x << std::endl
#define PRINT_LINE std::cout
#define END_LINE std::endl


#pragma region Math_Constants
#define TEST_MODE 1
#define PASS "PASS"
#define FAIL "!!!!! FAIL !!!!!"
#define EPSILON 0.0001
#define PI       3.14159265358979323846f   // pi
#define PI_2     1.57079632679489661923f   // pi/2
#define PI_4     0.785398163397448309616f  // pi/4

#define DEG_TO_RAD (PI / 180.0f)
#define RAD_TO_DEG (180.0f / PI)

#define INFECT_RAND_MAX 0x7FFF

#define DOUBLE_PRECISION
#define REAL_MAX FLT_MAX
#define real_sqrt sqrt
#define real_abs fabs
#define real_sin sin
#define real_cos cos
#define real_exp exp
#define real_pow pow
#define real_epsilon DBL_EPSILON

typedef float real;
#define Vector2 Vec2
#define Vector3 Vec3
#define Vector4 Vec4



#pragma endregion


struct Vector2
{
	float x;
	float y;

	Vector2(float a, float b)
	{
		x = a;
		y = b;
	}
	
};

struct Vector3
{
	float x;
	float y;
	float z;

	Vector3():x(0), y(0), z(0)
	{

	}

	Vector3(float a, float b, float c)
	{
		x = a;
		y = b;
		z = c;
	}
	
	Vector3 operator-(Vector3 const &op2)
	{
		Vector3 op1 = *this;
		Vector3 result;

		result.x = op1.x - op2.x;
		result.y = op1.y - op2.y;
		result.z = op1.z - op2.z;

		return result;

	}

	Vector3 operator+(Vector3 const &op2)
	{
		Vector3 op1 = *this;
		Vector3 result;

		result.x = op1.x + op2.x;
		result.y = op1.y + op2.y;
		result.z = op1.z + op2.z;

		return result;

	}
};

struct Vector4
{
	float x;
	float y;
	float z;
	float w;

	Vector4(float a, float b, float c, float d)
	{
		x = a;
		y = b;
		z = c;
		w = d;
	}
};
