#ifndef JUPITER_UI
#define JUPITER_UI

#include <SDL2/SDL.h>

void jupiter_handle_event(SDL_Event* event);
void jupiter_init_ui(SDL_Window* window, void* opengl_context);
void jupiter_update_ui();

#endif