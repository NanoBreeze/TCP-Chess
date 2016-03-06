#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Position.h"

class Piece : public sf::RectangleShape
{
public:
	Piece();

	Position getPosition() const;


	//sets the piece to the specified coordinate, along with its row-column position, along with the squares it can move to
	 void setCoordinate(const Coordinate coordinate);

	//returns the vector of Coordinates this piece is eligeble to move to
	std::vector<Coordinate> getMovableSquares() const;

protected: 

	//contains this piece's Coordinate, row and column
	Position position;

	//contains the coordinates this piece is eligible to move to. This field frequently changes
	std::vector<Coordinate> movableSquares;

	//calculates the eligible Squares this piece can move to, its getter is getMovableSquares()
	virtual void computeMovableSquares() = 0;

	Coordinate computeCoordinate(int row, int column);
};
