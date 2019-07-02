Decisions
	legal or psuedo legal move generation
		-do we check if a move leaves the king in check or not?
		-leaning towards psuedo legal, easier to code and appears to have same effeciency
	board state
		-state of a board is the pieces on it or the move list or both
		-must have some access to move list for draws, but how costly to generate 
		a board from the move list each time? probably costly... so state will be 
		move list but we will also pass board 









	R K B Q K B K R
	P P P P P P P P
	_ _ _ _ _ _ _ _
	_ _ _ _ _ _ _ _
	_ _ _ _ _ _ _ _
	_ _ _ _ _ _ _ _
	P P P P P P P P
	R K B Q K B K R

	|
	v
	R K B Q K B K R
	P P P P P P P P
	_ _ _ _ _ _ _ _
	_ _ _ _ _ _ _ _
	_ _ _ _ _ _ _ _
	1 _ 1 _ _ 1 _ 1
	P P P P P P P P
	R K B Q K B K R

	|
	v

	R K B Q K B K R
	P P P P P P P P
	_ _ _ _ _ _ _ _
	_ _ _ _ _ _ _ _
	_ _ _ _ _ _ _ _
	_ _ _ _ _ K _ _
	P P P P P P P P
	R K B Q K B _ R
