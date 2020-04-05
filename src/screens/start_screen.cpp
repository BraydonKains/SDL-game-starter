#include "headers/start_screen.h"

StartScreen::StartScreen(SDL_Renderer* _renderer) {
	renderer = _renderer;
}

void StartScreen::run() {
	bool close_flag = false;

	SDL_Event event;
	while(!close_flag) {
		while(SDL_PollEvent(&event)) {
			if(event.type == SDL_QUIT) {
				close_flag = true;
			}
		}
		redraw();
	}
}

void StartScreen::redraw() {
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}
