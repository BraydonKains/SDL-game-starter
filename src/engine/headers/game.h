#include<SDL2/SDL.h>
#include "../../enums.h"

class Game {
public:
	State game_state;
	SDL_Window* window;
	SDL_Renderer* renderer;

	Game(SDL_Window* _window);

	void init();
	void play();
};
