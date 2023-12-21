#pragma once
class PathFinder
{
	using DirectionArray = array<Direction, 5>;
	struct Node
	{
		Node*			parent;
		Point2D			position;
		float64			g;
		float64			h;
		float64			f;

		DirectionArray	reservedDirection;
	};

public:
	PathFinder();


private:
	Node* findNode(Point2D p);

private:
	Point2D		_startPosition;
	Point2D		_endPosition;

	list<Node*> _openList;
};

