#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>

#include "engine/headers/game.h"

int main() {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("error starting game: %s\n", SDL_GetError());
	}

	SDL_Window* window = SDL_CreateWindow("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	Game* game = new Game(window);
	game->init();
	game->play();

	SDL_Quit();

	return 0;
}
