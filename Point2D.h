#pragma once
struct Point2D
{
	int32 y;
	int32 x;
};



inline Point2D operator+(Point2D p1, Point2D p2)
{
	return { p1.y + p2.y, p1.x + p2.x };
}

inline Point2D operator-(Point2D p1, Point2D p2)
{
	return { p1.y - p2.y, p1.x - p2.x };
}

inline float64 GetEuclideanDistance(Point2D p1, Point2D p2)
{
	return sqrt(pow(p1.y - p2.y, 2) + pow(p1.x - p2.x, 2));
}

inline float64 GetManhattanDistance(Point2D p1, Point2D p2)
{
	return abs(p1.y - p2.y) + abs(p1.x - p2.x);
}