#pragma once
#include<SDL.h>
#include<string>
#include"GameObject.h"
class Player : public GameObject
{
public:
	void load(int x, int y, int width, int height,
		std::string textureID);
	virtual void draw(SDL_Renderer* pRenderer);
	virtual void update();
	virtual void clean();
};