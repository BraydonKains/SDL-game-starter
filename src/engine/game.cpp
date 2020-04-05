#include "headers/game.h"
#include "../screens/headers/start_screen.h"

Game::Game(SDL_Window* _window) {
	game_state = Start;
	window = _window;
}

void Game::init() {
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
}

void Game::play() {
	StartScreen start_screen(renderer);
	while(game_state != Quit) {
		switch(game_state) {
		case Start:
			start_screen.run();
		}
	}
}
