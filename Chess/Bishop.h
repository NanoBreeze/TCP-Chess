#pragma once

#include "Piece.h"


class Bishop : public Piece
{
public:
	Bishop();

protected : 

	//called every time the bishop moves to a new square or is newly made because that's when its movable squares change.
	void computeMovableSquares() override;
};

