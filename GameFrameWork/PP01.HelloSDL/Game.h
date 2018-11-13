#pragma once
#include<vector>
#include "SDL.h"
#include"GameObject.h"
#include"Player.h"
#include"Enemy.h"

class Game
{
public:
	~Game() {}
	bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void render();

	static Game* Instance();

	void handleEvents();
	void clean();
	void update();
	bool running() { return m_bRunning; }
	SDL_Renderer* getRenderer() const { return m_pRenderer; }
private:
	SDL_Window * m_pWindow;
	SDL_Renderer* m_pRenderer;
	bool m_bRunning;
	int m_CurrentFrame;

	Game();

	static Game* s_pInstance;

	std::vector<GameObject*> m_gameObjects;

;


}; typedef Game TheGame;