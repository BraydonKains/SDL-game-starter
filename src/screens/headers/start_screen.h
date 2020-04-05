#include <SDL2/SDL.h>
#include "screen.h"

class StartScreen {
public:
	StartScreen(SDL_Renderer* _renderer);

	void run();
	void redraw();
private:
	SDL_Renderer* renderer;
};
