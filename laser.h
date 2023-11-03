#pragma once
#include "raylib.h"

class Laser {
public:
	Laser(Vector2 position, int speed);
	void Update();
	void Draw();
	Rectangle getRect();

	Vector2 position;
	int speed;
	bool active;
};