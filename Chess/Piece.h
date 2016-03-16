#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Coordinate.h"
#include "CoordinateHelper.h"
//#include "Position.h"
//#include "Board.h"


class Piece : public sf::RectangleShape
{
public:

	Piece();

	//sets the piece's Position given its Coordinate
	Piece(Coordinate);

	//returns the coordinate this piece has
	Coordinate getCoordinate() const;

	//sets coordinate to the given Coordinate. Denotes that this piece on the coordinate
	virtual void setCoordinate(const Coordinate);

	 //returns moves, 
	 std::vector<Coordinate> getMoves() const;

	//clears all COordinates in moves
	void clearMoves();

	//calculates the eligible Coordinates this piece can move to and return those Coordinates
	virtual std::vector<Coordinate> computeMoves() = 0;

	//gets isWhite to return if Piece belongs to white or black player
	bool getIsWhite() const;

	void setIsWhite(const bool);

protected: 



	//determines if the Piece is belongs to white or black player
	bool isWhite;

	//replaces Position
	Coordinate coordinate;

	//stores the Coordinates of the places this piece can move to
	std::vector<Coordinate> moves;
};

